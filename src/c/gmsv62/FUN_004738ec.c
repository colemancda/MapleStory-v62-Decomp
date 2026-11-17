/* FUN_004738ec - 0x004738ec in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004738ec(SOCKET *param_1)

{
  if (*param_1 != 0xffffffff) {
    closesocket(*param_1);
    *param_1 = 0xffffffff;
  }
  return;
}


