cout << "Processing Data" << endl;
infile.get(keyString, NO_OF_QUESTIONS+1);cout << "Key: " << keyString << endl;
infile >> ID;
infile.get(ch);
infile.get(answerString, 21);
while (infile)