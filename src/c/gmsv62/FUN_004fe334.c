/* FUN_004fe334 - 0x004fe334 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_004fe334(int param_1)

{
  byte bVar1;
  char cVar2;
  
  bVar1 = FUN_0042452b();
  cVar2 = FUN_0042452b();
  if (bVar1 < 2) {
LAB_004fe3a0:
    if (*(int *)(param_1 + 0x734) == 0) {
      FUN_004fd949();
    }
  }
  else {
    if (bVar1 != 2) {
      if (bVar1 < 3) {
        return;
      }
      if (bVar1 < 5) {
        if ((*(int *)(param_1 + 0x734) == 1) && (cVar2 == '\x01')) {
          FUN_004fdab3();
        }
      }
      else if (bVar1 != 5) {
        if (bVar1 != 6) {
          return;
        }
        goto LAB_004fe3a0;
      }
    }
    if (*(int *)(param_1 + 0x734) == 0) {
      FUN_004fd7df();
    }
  }
  return;
}


