/* FUN_0087a1df - 0x0087a1df in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087a1df(LPCWSTR param_1)

{
  CHAR local_18 [20];
  
  WideCharToMultiByte(0,0,param_1,-1,local_18,0x14,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_0087b620(local_18);
  return;
}


