/* FUN_0087a231 - 0x0087a231 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_0087a231(LPCWSTR param_1)

{
  CHAR local_54 [80];
  
  WideCharToMultiByte(0,0,param_1,-1,local_54,0x50,(LPCSTR)0x0,(LPBOOL)0x0);
  FUN_0087b6b6(local_54);
  return;
}


