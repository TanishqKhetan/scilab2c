lines(0);

global SCI2CHOME
        
scilab2c(SCI2CHOME+"/tests/unit_tests/testArduino/blink_13.sci", TMPDIR, SCI2CHOME+"/tests/unit_tests/testArduino", "All", "make" ,"Arduino", "uno");

editor([TMPDIR+"/setup_arduino.cpp";TMPDIR+"/loop_arduino.cpp"]);
