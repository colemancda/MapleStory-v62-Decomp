/* FUN_004525e2 - 0x004525e2 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


LPWSTR FUN_004525e2(LPCSTR param_1,int param_2)

{
  int iVar1;
  LPWSTR lpWideCharStr;
  
  iVar1 = MultiByteToWideChar(0,0,param_1,param_2,(LPWSTR)0x0,0);
  lpWideCharStr = (LPWSTR)FUN_00402df5(0,iVar1 + -1);
  if (lpWideCharStr != (LPWSTR)0x0) {
    MultiByteToWideChar(0,0,param_1,-1,lpWideCharStr,iVar1 + -1);
  }
  return lpWideCharStr;
}


