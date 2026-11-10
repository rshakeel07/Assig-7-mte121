void readfile(ifstream &infile, string people[], int staff[], int totalspots)
{
    totalspots = 0;
    while (infile >> staff[totalspots] >> people[totalspots])
    {
        totalspots++;
    }
}