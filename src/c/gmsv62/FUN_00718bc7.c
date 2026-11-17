/* FUN_00718bc7 - 0x00718bc7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00718bc7(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)(param_1 + 0xe0);
  *piVar1 = *piVar1 + -0x1e;
  if (*piVar1 < 0) {
    if ((*(int *)(param_1 + 0xd4) == 0) && (*(int *)(param_1 + 0xb0) != 0)) {
      FUN_00815de9();
      FUN_0071b9fa();
    }
    if ((*(int *)(param_1 + 0xd8) == 0) && (*(int *)(param_1 + 0xb8) != 0)) {
      FUN_00815de9();
      FUN_0071ba10();
    }
    if ((*(int *)(param_1 + 0xdc) == 0) && (*(int *)(param_1 + 0xc0) != 0)) {
      FUN_00815de9();
      FUN_0071ba26();
    }
  }
  return;
}


