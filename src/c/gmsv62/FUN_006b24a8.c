/* FUN_006b24a8 - 0x006b24a8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_006b24a8(int param_1)

{
  int *piVar1;
  
  if ((*(int *)(param_1 + 0x570) == 0) && (*(int *)(param_1 + 0x588) == 0)) {
    piVar1 = (int *)(param_1 + 0x58c);
    *piVar1 = *piVar1 + -0x1e;
    if ((*piVar1 < 0) && (*(int *)(param_1 + 0x57c) != 0)) {
      FUN_00815de9();
      FUN_006b4156();
    }
  }
  return;
}


