#include "mypanel.h"

MyPanel::MyPanel( wxWindow* parent )
:
MyPanelBase( parent )
{
	setSpinCtrl();
	srand(time(NULL));
}

void MyPanel::onClear( wxCommandEvent& event )
{
// TODO: Implement onClear
	outputTextCtrl->Clear();
}

void MyPanel::onGenerate( wxCommandEvent& event )
{
// TODO: Implement onGenerate

	wxString text = inputTextCtrl->GetValue();
	minValue = minSpinCtrl->GetValue();
	maxValue = maxSpinCtrl->GetValue();
	auto values = getValues(text);
	setValues(values);

	//outputTextCtrl->SetValue(text);
}


void MyPanel::setSpinCtrl(){
	minSpinCtrl->SetDigits(4);
	maxSpinCtrl->SetDigits(4);
	minSpinCtrl->SetIncrement(0.0001);
	maxSpinCtrl->SetIncrement(0.0001);
	minSpinCtrl->SetRange(-100, 100);
	maxSpinCtrl->SetRange(-100, 100);
	minSpinCtrl->SetValue(minValue);
	maxSpinCtrl->SetValue(maxValue);

}

std::vector<std::vector<double>> MyPanel::getValues(wxString& input){
	std::vector<std::vector<double>> returnValues;

	wxStringTokenizer token(input, "\n");


	while (token.HasMoreTokens() ){

		std::vector<double> row_vector;

		wxStringTokenizer textValue(token.GetNextToken(), "\t");
		while (textValue.HasMoreTokens()){
			double value;
			wxString text = textValue.GetNextToken();
			if (text.ToDouble(&value))
				row_vector.push_back(value);
			else
				outputTextCtrl->AppendText("ERROR");
		}
		returnValues.push_back(row_vector);
	}		
	return returnValues;

}



double MyPanel::randomValue(double min , double max ){
	double range = max - min;
	double mid = (max + min) / 2;	
	range /= 0.0001;

	int irange = floor(range);
	int ioffset = rand() % irange;

	double offset = ioffset;
	offset *= 0.0001;
	offset += min;

	return offset;


}

void MyPanel::setValues(std::vector<std::vector<double>>& values){
	for (auto i : values){
		for (auto j : i){
			double offset = randomValue(minValue, maxValue);
			double value = j + offset;
			outputTextCtrl->AppendText(wxString::Format("%.4f", value));
			outputTextCtrl->AppendText("\t");
		}

		outputTextCtrl->AppendText("\n");

	}

}

