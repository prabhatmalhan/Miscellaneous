class Map_Of_India
{
    public static void main(String[] args)
    {
        int a = 10, b = 0, c = 10;
        String S = "TFy!QJu ROo TNn(ROo)SLq SLq ULo+UHs UJq TNn*RPn/QPbEWS_JSWQAIJO^NBELPeHBFHT}TnALVlBLOFAkHFOuFETpHCStHAUFAgcEAelclcn^r^r\\tZvYxXyT|S~Pn SPm SOn TNn ULo0ULo#ULo-WHq!WFs XDt!";

        /*In the string above :-
         * Each capital alphabet denotes the no. of times to print spaces and exclamation
         * All the " ! " to be printed with spacing
         * The small alphabet denote line breaks
         * The special charactes helps in alteration of to be printed symbols
         */

        //Scrolling through the string
        while (a != 0 && b < S.length()) 
        {
            a = S.charAt(b++);  //extracting each character
            while (a-- > 64) 
            {
                if (++c == 90)  //checking for line-breaks
                {
                    c = 10;    //10=ASCII of '\n'
                    System.out.print((char)c);
                }
                else
                {
                    if (b % 2 == 0)     // alternating between ! and space
                        System.out.print('!');
                    else
                        System.out.print(' ');
                }
            }
        }
    }
}
