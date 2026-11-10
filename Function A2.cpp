void freespace(string parkingnames[50], string remove)
{
    for (int i = 0; i < 50; i++)
    {
        if (parkingnames[i] == remove)
        {
            parkingnames[i] = "";
        }
    }
}