#pragma once

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    public ref class Form1 : public System::Windows::Forms::Form
    {
        public:
            Form1(void)
            {
                InitializeComponent();
                // Set the window size
                this->Size = System::Drawing::Size(750, 450);
                this->MinimumSize = Drawing::Size(750, 450);
                this->MaximumSize = Drawing::Size(750, 450);
                this->MaximizeBox = false;
            }

        protected:
            ~Form1()
            {
                if (components)
                {
                    delete components;
                }
            }

        private: System::Windows::Forms::TextBox^ HexInput;
        private: System::Windows::Forms::TextBox^ DezInput;
        private: System::Windows::Forms::TextBox^ BinInput;

        private: System::Windows::Forms::Label^ HexLabel;
        private: System::Windows::Forms::Label^ DezLabel;
        private: System::Windows::Forms::Label^ BinLabel;

        private: System::Windows::Forms::DataGridView^ dataGridView1;
        private: System::Windows::Forms::DataGridViewTextBoxColumn^ Hex;
        private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dez_unsigned;
        private: System::Windows::Forms::DataGridViewTextBoxColumn^ Dez_signed;
        private: System::Windows::Forms::DataGridViewTextBoxColumn^ Bin;

        private: System::Windows::Forms::Button^ clearListButton;
        private: System::Windows::Forms::Button^ closeApplicationButton;

        protected:

        private:
        /// <summary>
        /// Required designer variable.
        /// </summary>
        System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->HexInput = (gcnew System::Windows::Forms::TextBox());
            this->DezInput = (gcnew System::Windows::Forms::TextBox());
            this->BinInput = (gcnew System::Windows::Forms::TextBox());
            this->HexLabel = (gcnew System::Windows::Forms::Label());
            this->DezLabel = (gcnew System::Windows::Forms::Label());
            this->BinLabel = (gcnew System::Windows::Forms::Label());
            this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
            this->Hex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Dez_unsigned = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Dez_signed = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->Bin = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
            this->clearListButton = (gcnew System::Windows::Forms::Button());
            this->closeApplicationButton = (gcnew System::Windows::Forms::Button());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
            this->SuspendLayout();
            // 
            // HexInput
            // 
            this->HexInput->Location = System::Drawing::Point(30, 70);
            this->HexInput->Name = L"HexInput";
            this->HexInput->Size = System::Drawing::Size(215, 22);
            this->HexInput->TabIndex = 1;
            this->HexInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->HexInput->GotFocus += gcnew EventHandler(this, &Form1::textBoxGotFocus);
            this->HexInput->LostFocus += gcnew EventHandler(this, &Form1::textBoxLostFocus);
            this->HexInput->KeyPress += gcnew KeyPressEventHandler(this, &Form1::textBoxKeyPress);
            // 
            // DezInput
            // 
            this->DezInput->Location = System::Drawing::Point(269, 70);
            this->DezInput->Name = L"DezInput";
            this->DezInput->Size = System::Drawing::Size(208, 22);
            this->DezInput->TabIndex = 2;
            this->DezInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->DezInput->GotFocus += gcnew EventHandler(this, &Form1::textBoxGotFocus);
            this->DezInput->LostFocus += gcnew EventHandler(this, &Form1::textBoxLostFocus);
            this->DezInput->KeyPress += gcnew KeyPressEventHandler(this, &Form1::textBoxKeyPress);
            // 
            // BinInput
            // 
            this->BinInput->Location = System::Drawing::Point(497, 70);
            this->BinInput->Name = L"BinInput";
            this->BinInput->Size = System::Drawing::Size(401, 22);
            this->BinInput->TabIndex = 3;
            this->BinInput->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
            this->BinInput->GotFocus += gcnew EventHandler(this, &Form1::textBoxGotFocus);
            this->BinInput->LostFocus += gcnew EventHandler(this, &Form1::textBoxLostFocus);
            this->BinInput->KeyPress += gcnew KeyPressEventHandler(this, &Form1::textBoxKeyPress);
            // 
            // HexLabel
            // 
            this->HexLabel->AutoSize = true;
            this->HexLabel->Location = System::Drawing::Point(122, 51);
            this->HexLabel->Name = L"HexLabel";
            this->HexLabel->Size = System::Drawing::Size(31, 16);
            this->HexLabel->TabIndex = 4;
            this->HexLabel->Text = L"Hex";
            // 
            // DezLabel
            // 
            this->DezLabel->AutoSize = true;
            this->DezLabel->Location = System::Drawing::Point(347, 51);
            this->DezLabel->Name = L"DezLabel";
            this->DezLabel->Size = System::Drawing::Size(31, 16);
            this->DezLabel->TabIndex = 5;
            this->DezLabel->Text = L"Dez";
            // 
            // BinLabel
            // 
            this->BinLabel->AutoSize = true;
            this->BinLabel->Location = System::Drawing::Point(689, 51);
            this->BinLabel->Name = L"BinLabel";
            this->BinLabel->Size = System::Drawing::Size(26, 16);
            this->BinLabel->TabIndex = 6;
            this->BinLabel->Text = L"Bin";
            // 
            // dataGridView1
            // 
            this->dataGridView1->BackgroundColor = System::Drawing::Color::White;
            this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
            this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
                this->Hex, this->Dez_unsigned,
                    this->Dez_signed, this->Bin
            });
            this->dataGridView1->GridColor = System::Drawing::Color::White;
            this->dataGridView1->Location = System::Drawing::Point(30, 136);
            this->dataGridView1->Name = L"dataGridView1";
            this->dataGridView1->RowHeadersVisible = false;
            this->dataGridView1->RowHeadersWidth = 51;
            this->dataGridView1->RowTemplate->Height = 24;
            this->dataGridView1->Size = System::Drawing::Size(924, 307);
            this->dataGridView1->TabIndex = 7;
            // 
            // Hex
            // 
            this->Hex->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
            this->Hex->HeaderText = L"Hex";
            this->Hex->MinimumWidth = 6;
            this->Hex->Name = L"Hex";
            this->Hex->ReadOnly = true;
            this->Hex->Width = 120;
            // 
            // Dez_unsigned
            // 
            this->Dez_unsigned->HeaderText = L"Dez_unsigned";
            this->Dez_unsigned->MinimumWidth = 6;
            this->Dez_unsigned->Name = L"Dez_unsigned";
            this->Dez_unsigned->ReadOnly = true;
            this->Dez_unsigned->Width = 160;
            // 
            // Dez_signed
            // 
            this->Dez_signed->HeaderText = L"Dez_signed";
            this->Dez_signed->MinimumWidth = 6;
            this->Dez_signed->Name = L"Dez_signed";
            this->Dez_signed->ReadOnly = true;
            this->Dez_signed->Width = 160;
            // 
            // Bin
            // 
            this->Bin->HeaderText = L"Bin";
            this->Bin->MinimumWidth = 6;
            this->Bin->Name = L"Bin";
            this->Bin->ReadOnly = true;
            this->Bin->Width = 250;
            // 
            // clearListButton
            // 
            this->clearListButton->Location = System::Drawing::Point(30, 459);
            this->clearListButton->Name = L"clearListButton";
            this->clearListButton->Size = System::Drawing::Size(123, 32);
            this->clearListButton->TabIndex = 8;
            this->clearListButton->Text = L"Clear List";
            this->clearListButton->UseVisualStyleBackColor = true;
            this->clearListButton->Click += gcnew EventHandler(this, &Form1::clearListButton_Click);
            // 
            // closeApplicationButton
            // 
            this->closeApplicationButton->Location = System::Drawing::Point(835, 459);
            this->closeApplicationButton->Name = L"closeApplicationButton";
            this->closeApplicationButton->Size = System::Drawing::Size(119, 32);
            this->closeApplicationButton->TabIndex = 9;
            this->closeApplicationButton->Text = L"Close";
            this->closeApplicationButton->UseVisualStyleBackColor = true;
            this->closeApplicationButton->Click += gcnew System::EventHandler(this, &Form1::closeApplicationButton_Click);
            // 
            // Form1
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(982, 503);
            this->Controls->Add(this->closeApplicationButton);
            this->Controls->Add(this->clearListButton);
            this->Controls->Add(this->dataGridView1);
            this->Controls->Add(this->BinLabel);
            this->Controls->Add(this->DezLabel);
            this->Controls->Add(this->HexLabel);
            this->Controls->Add(this->BinInput);
            this->Controls->Add(this->DezInput);
            this->Controls->Add(this->HexInput);
            this->Margin = System::Windows::Forms::Padding(4);
            this->Name = L"Form1";
            this->Text = L"Base Converter";
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
        private: System::Void textBoxGotFocus(Object^ sender, EventArgs^ e)
        {
            // Change the background color when the TextBox gets focus (is clicked)
            TextBox^ textBox = dynamic_cast<TextBox^>(sender);
            textBox->BackColor = Color::LightBlue;
        }

        private: System::Void textBoxLostFocus(Object^ sender, EventArgs^ e)
        {
            // Change the background color back to the original color when focus is lost
            TextBox^ textBox = dynamic_cast<TextBox^>(sender);
            textBox->BackColor = Color::White;
        }

        private: System::Void textBoxKeyPress(Object^ sender, KeyPressEventArgs^ e)
        {
            // Getting the textbox instance (the sender)
            TextBox^ textBox = dynamic_cast<TextBox^>(sender);

            // Check if the Enter key was pressed
            if (e->KeyChar == (char)Keys::Enter)
            {
                // Declaring the variables used for displaying the converted numbers
                System::String^ hexVal;
                unsigned int unsignedDecVal = 0;
                int signedDecVal = 0;
                System::String^ binVal;

                // Recognizing what input box has been used and making the corresponding converstions
                if (textBox->Name == "HexInput")
                {
                    hexVal = formatHexValue(textBox->Text);
                    signedDecVal = hexToDecimal(textBox->Text);
                    unsignedDecVal = signedToUnsignedDecimal(signedDecVal);
                    binVal = decimalToBinary(signedDecVal);
                }
                else if (textBox->Name == "DezInput")
                {
                    hexVal = decimalToHex(System::Convert::ToInt32(textBox->Text));
                    signedDecVal = Convert::ToInt32(textBox->Text);   // Converting from string to decimal
                    unsignedDecVal = signedToUnsignedDecimal(signedDecVal);
                    binVal = decimalToBinary(signedDecVal);
                }
                else if (textBox->Name == "BinInput")
                {
                    signedDecVal = Convert::ToInt32(textBox->Text, 2);  // Converting from string to decimal (specifying the base from the input string number)
                    unsignedDecVal = signedToUnsignedDecimal(signedDecVal);
                    hexVal = decimalToHex(signedDecVal);
                    binVal = decimalToBinary(signedDecVal);
                }

                // Insert a new row in the list with the updated values
                this->dataGridView1->Rows->Add(gcnew array<Object^> { hexVal, unsignedDecVal, signedDecVal, binVal });

                // Clear all text boxes
                this->HexInput->Text = "";
                this->DezInput->Text = "";
                this->BinInput->Text = "";
            }
        }

        // Base convertion functions
        private: System::Int32 hexToDecimal(String^ hexValue) 
        {
            return Convert::ToInt32(hexValue, 16);
        }

        private: System::UInt32 signedToUnsignedDecimal(int decVal) 
        {
            return static_cast<unsigned int>(decVal);
        }

        private: System::String^ decimalToBinary(int decVal) 
        {
            int maskedValue = decVal & 0xFFFFFFFF;    // Masking the number to keep only the first 32 bits
            System::String^ binVal;
            binVal = Convert::ToString(maskedValue, 2)->PadLeft(32, '0');
            for (int i = 4; i <= 34; i += 5) {
                binVal = binVal->Insert(i, " ");
            }
            return binVal;
        }

        private: System::String^ formatHexValue(String^ hexVal) 
        {
            String^ formattedHexVal = String::Format("{0:X2}", hexVal);
            formattedHexVal = formattedHexVal->PadLeft(8, '0');
            formattedHexVal = formattedHexVal->Insert(4, " ");
            return formattedHexVal;
        }

        private: System::String^ decimalToHex(int decVal) 
        {
            String^ hexValue;
            hexValue = String::Format("{0:X2}", decVal);
            hexValue = hexValue->PadLeft(8, '0');
            hexValue = hexValue->Insert(4, " ");
            return hexValue;
        }

        // Clear the data list when the "Clear List" button is pressed
        private: System::Void clearListButton_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            this->dataGridView1->Rows->Clear();
        }

        // Close the application when the "Close" button is clicked
        private: System::Void closeApplicationButton_Click(System::Object^ sender, System::EventArgs^ e) 
        {
            Application::Exit();
        }
    }; // end of class Form1
} // end of namespace CppCLRWinFormsProject
