/* FUN_518149ba - 0x518149ba in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


int FUN_518149ba(void)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  undefined3 extraout_var;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  FUN_5180c4c1((void *)(unaff_EBP + -0x14),extraout_ECX);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (0 < *(int *)(extraout_ECX + 0x2c)) {
    piVar1 = *(int **)(extraout_ECX + 100);
    *(undefined4 *)(extraout_ECX + 0x2c) = 0;
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x20))(piVar1);
    }
  }
  bVar3 = FUN_51814906(extraout_ECX);
  if (CONCAT31(extraout_var,bVar3) == 0) {
    *(undefined4 *)(extraout_ECX + 0x2c) = 0;
  }
  iVar2 = *(int *)(extraout_ECX + 0x2c);
  if (iVar2 != 0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_5180c435();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


