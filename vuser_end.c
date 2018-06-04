vuser_end()
{

	lr_think_time(10);
	
	lr_start_transaction("USCC_CRM_R12_UpdatePin_06_Logout");


	web_custom_request("crm_92", 
		"URL=http://crm.pte.uscc.com/crm", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/octet-stream", 
		"Referer=", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		"EncType=application/octet-stream", 
		"BodyBinary=\\xAC\\xED\\x00\\x05sr\\x00/com.amdocs.uif.common.datatype.RequestPayloadVo\\x00t\\xE0\\x8FR\\xB6\\xE0\\x92\\x0C\\x00\\x00xpw\t\\x01\\x00\\x00\\x01\\\\\\x16\\xAB\r,t\\x008EXT<{c_sessionid};appId=UIF;>w%\\x00#U809D05SQATES20_AWT-EventQueue-0_93ur\\x000[Lcom.amdocs.uif.common.datatype.RequestGroupVo;\\xF4Z\\x03o\\xD91/"
		"\\xB7\\x02\\x00\\x00xp\\x00\\x00\\x00\\x01sr\\x00-com.amdocs.uif.common.datatype.RequestGroupVo\\x00t\\xE0\\x8FR\\xB6\\xE0\\x93\\x0C\\x00\\x00xpw\\x01\\x01ur\\x00/[Lcom.amdocs.uif.common.datatype.RequestItemVo;\\xCD\\xC7\\xE2=\\xF9\\x99\\x11&\\x02\\x00\\x00xp\\x00\\x00\\x00\\x01sr\\x00,com.amdocs.uif.common.datatype.RequestItemVo\\x00t\\xE0\\x8FR\\xB6\\xE0\\x91\\x0C\\x00\\x00xpwA\\x02\\x00\\x00\\x01\\\\\\x16\\xAB\r,\\x00%U809D05SQATES20_AWT-EventQueue-0_93_1\\x00\\x03uif\\x00\n"
		"uif.Logoutppw\\x03\\x00\\x00\\x00pppsr\\x00\\x10java.util.Locale~\\xF8\\x11`\\x9C0\\xF9\\xEC\\x02\\x00\\x04I\\x00\\x08hashcodeL\\x00\\x07countryt\\x00\\x12Ljava/lang/String;L\\x00\\x08languageq\\x00~\\x00\\x0CL\\x00\\x07variantq\\x00~\\x00\\x0Cxp\\xFF\\xFF\\xFF\\xFFt\\x00\\x02USt\\x00\\x02ent\\x00\\x00q\\x00~\\x00\rpxw\\x01\\x00xw\\x01\\x02x", 
		LAST);

//	web_custom_request("crm_93", 
//		"URL=http://crm.pte.uscc.com/crm", 
//		"Method=POST", 
//		"TargetFrame=", 
//		"Resource=0", 
//		"RecContentType=application/octet-stream", 
//		"Referer=", 
//		"Snapshot=t96.inf", 
//		"Mode=HTML", 
//		"EncType=application/octet-stream", 
//		"BodyBinary=\\xAC\\xED\\x00\\x05sr\\x00/com.amdocs.uif.common.datatype.RequestPayloadVo\\x00t\\xE0\\x8FR\\xB6\\xE0\\x92\\x0C\\x00\\x00xpw\t\\x01\\x00\\x00\\x01\\\\\\x16\\xAB\rjt\\x008EXT<{c_sessionid};appId=UIF;>w%\\x00#U809D05SQATES20_AWT-EventQueue-0_94ur\\x000[Lcom.amdocs.uif.common.datatype.RequestGroupVo;\\xF4Z\\x03o\\xD91/"
//		"\\xB7\\x02\\x00\\x00xp\\x00\\x00\\x00\\x01sr\\x00-com.amdocs.uif.common.datatype.RequestGroupVo\\x00t\\xE0\\x8FR\\xB6\\xE0\\x93\\x0C\\x00\\x00xpw\\x01\\x01ur\\x00/[Lcom.amdocs.uif.common.datatype.RequestItemVo;\\xCD\\xC7\\xE2=\\xF9\\x99\\x11&\\x02\\x00\\x00xp\\x00\\x00\\x00\\x01sr\\x00,com.amdocs.uif.common.datatype.RequestItemVo\\x00t\\xE0\\x8FR\\xB6\\xE0\\x91\\x0C\\x00\\x00xpwG\\x02\\x00\\x00\\x01\\\\\\x16\\xAB\r"
//		"j\\x00%U809D05SQATES20_AWT-EventQueue-0_94_1\\x00\\x03uif\\x00\\x10uif.LogoutTicketppw\\x03\\x00\\x00\\x00pppsr\\x00\\x10java.util.Locale~\\xF8\\x11`\\x9C0\\xF9\\xEC\\x02\\x00\\x04I\\x00\\x08hashcodeL\\x00\\x07countryt\\x00\\x12Ljava/lang/String;L\\x00\\x08languageq\\x00~\\x00\\x0CL\\x00\\x07variantq\\x00~\\x00\\x0Cxp\\xFF\\xFF\\xFF\\xFFt\\x00\\x02USt\\x00\\x02ent\\x00\\x00q\\x00~\\x00\rpxw\\x01\\x00xw\\x01\\x03x", 
//		LAST);
	
	lr_end_transaction("USCC_CRM_R12_UpdatePin_06_Logout", LR_AUTO);


	return 0;
}