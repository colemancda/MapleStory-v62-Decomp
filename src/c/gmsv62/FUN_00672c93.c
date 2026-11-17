/* FUN_00672c93 - 0x00672c93 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int __fastcall FUN_00672c93(int param_1)

{
  LPCSTR pCVar1;
  int iVar2;
  LPCSTR lpString2;
  BOOL BVar3;
  HANDLE hFindFile;
  _WIN32_FIND_DATAA *p_Var4;
  UINT UVar5;
  _WIN32_FIND_DATAA local_16c;
  LPWIN32_FIND_DATAA local_2c;
  undefined1 local_28 [36];
  
  local_2c = FindFirstFileA((LPCSTR)&DAT_009645b0,&local_16c);
  pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a118,0);
  while( true ) {
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    if (iVar2 == 0) break;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a104);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00672f4c;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a0f0);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00672f63;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a0dc);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00672f7a;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a0c8);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00672f91;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a0b4);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00672fa8;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a0a4);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00672fbf;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a090);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00672fd6;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a080);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00672fed;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a070);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00673004;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a060);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_0067301b;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a04c);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00673032;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a038);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00673049;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a024);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    UVar5 = 0;
    if (iVar2 == 0) goto LAB_00673060;
    pCVar1 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a010);
    iVar2 = lstrcmpiA(local_16c.cFileName,pCVar1);
    pCVar1 = (LPCSTR)0x0;
    if (iVar2 == 0) goto LAB_00673077;
    lpString2 = (LPCSTR)FUN_00865f61(local_28,&DAT_0096a000);
    hFindFile = (HANDLE)0x672ef6;
    iVar2 = lstrcmpiA(local_16c.cFileName,lpString2);
    if (iVar2 == 0) goto LAB_0067308e;
    p_Var4 = &local_16c;
    BVar3 = FindNextFileA(hFindFile,local_2c);
    if (BVar3 == 0) goto LAB_006730a6;
    FUN_00865f61(local_28,&DAT_0096a118,0);
  }
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,0);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00672f4c:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00672f63:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00672f7a:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00672f91:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00672fa8:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00672fbf:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00672fd6:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00672fed:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00673004:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_0067301b:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00673032:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00673049:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  UVar5 = 0;
  FUN_0087c60e();
LAB_00673060:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,UVar5);
  pCVar1 = (LPCSTR)0x0;
  FUN_0087c60e();
LAB_00673077:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,(UINT)pCVar1);
  FUN_0087c60e(0);
LAB_0067308e:
  MessageBoxA((HWND)0x0,&DAT_00969fa0,s_Error_Message_00969ff0,0);
  p_Var4 = (_WIN32_FIND_DATAA *)0x0;
  FUN_0087c60e(0);
LAB_006730a6:
  FUN_00673257(0xbaadf00d,0xbaadf00d,param_1 + 0x24);
  *(undefined4 *)(param_1 + 0xa8) = 0;
  *(undefined4 *)(param_1 + 0xac) = 0;
  *(undefined4 *)(param_1 + 0xb8) = 0;
  *(undefined4 *)(param_1 + 0xbc) = 1;
  *(undefined4 *)(param_1 + 0xc0) = 1;
  FUN_006730ee(p_Var4);
  FUN_00673112();
  return param_1;
}


