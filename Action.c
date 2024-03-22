//Action()
//{
//	//system("cmd.exe /c D:\\Projects\\CoderPlus\\Scr02_Autocoding_ML_DDM\\Proxy.bat");
//	
//	system("cmd.exe /c \\\\lab1\\share\\Performance\\Loadrunner\\mauth\\Scripts\\Proxy.bat");	
//	
//	lr_think_time(atoi(lr_eval_string("{t_Think_Time}")));
//
//	return 0;
//}
Action()
{	
	char psCommand[1000] ;
	
	const char *psScriptFilePath = "D:\\mauth\\Scripts\\Proxy_Cleanup.ps1"; 

	system("start \"conhost\" cmd.exe /c D:\\mauth\\Scripts\\CoderPlus_Lightning_Proxy.bat");
	
	lr_think_time(atoi(lr_eval_string("{t_Think_Time}")));
	
	sprintf(psCommand, "powershell.exe -ExecutionPolicy Bypass -File \"%s\" & exit", psScriptFilePath);
	
	lr_output_message(psCommand);
	
	 system(psCommand);

	return 0;
}