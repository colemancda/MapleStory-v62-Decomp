/* FUN_00871720 - 0x00871720 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __fastcall FUN_00871720(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined1 local_8 [4];
  undefined1 local_4 [4];
  
  piVar1 = *(int **)(param_1 + 4);
  piVar2 = (int *)*piVar1;
  if (*(int *)(param_1 + 0xc) == 0) {
    while (piVar2 != piVar1) {
      FUN_00872590();
      FUN_00872150(local_4,piVar2);
    }
  }
  else {
    piVar2 = (int *)piVar1[1];
    if ((int *)piVar1[1] != DAT_0097fca4) {
      do {
        FUN_00872550(piVar2[2]);
        piVar1 = (int *)*piVar2;
        FUN_00402614(piVar2);
        piVar2 = piVar1;
      } while (piVar1 != DAT_0097fca4);
    }
    *(int **)(*(int *)(param_1 + 4) + 4) = DAT_0097fca4;
    *(undefined4 *)(param_1 + 0xc) = 0;
    *(undefined4 *)*(undefined4 *)(param_1 + 4) = *(undefined4 *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    FUN_00871e30(local_8);
  }
  FUN_00402614(*(undefined4 *)(param_1 + 4));
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  FUN_00878d4a();
  piVar1 = DAT_0097fca4;
  DAT_0097fca0 = DAT_0097fca0 + -1;
  piVar2 = (int *)0x0;
  if (DAT_0097fca0 == 0) {
    DAT_0097fca4 = (int *)0x0;
    piVar2 = piVar1;
  }
  FUN_00878de6();
  if (piVar2 != (int *)0x0) {
    FUN_00402614(piVar2);
  }
  return;
}


