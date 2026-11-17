/* FUN_00674f50 - 0x00674f50 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 * __fastcall FUN_00674f50(undefined4 *param_1)

{
  WSADATA local_190;
  
  *param_1 = 0;
  WSAStartup(2,&local_190);
  return param_1;
}


