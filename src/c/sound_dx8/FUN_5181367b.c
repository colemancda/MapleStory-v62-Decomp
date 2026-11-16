/* FUN_5181367b - 0x5181367b in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


bool FUN_5181367b(int param_1,int param_2)

{
  int iVar1;
  bool bVar2;
  undefined1 local_c [4];
  int local_8;
  
  if (*(int *)(param_1 + 0x24) != 0) {
    iVar1 = FUN_5181287a();
    iVar1 = *(int *)(iVar1 + 4);
    if (local_8 != 0) {
      FUN_51813012((int)local_c);
    }
    if (iVar1 == 0) {
      bVar2 = true;
      goto LAB_518136b9;
    }
  }
  bVar2 = false;
LAB_518136b9:
  if (param_2 == 0) {
    bVar2 = !bVar2;
  }
  else if (bVar2) {
    bVar2 = param_2 != 1;
  }
  else {
    bVar2 = true;
  }
  return bVar2;
}


