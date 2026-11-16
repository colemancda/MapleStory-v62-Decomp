/* FUN_5180839d - 0x5180839d in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_5180839d(void)

{
  undefined4 *puVar1;
  int *piVar2;
  undefined4 *extraout_ECX;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_518198c8;
  extraout_ECX[1] = &PTR_LAB_518198c4;
  *(undefined4 *)(unaff_EBP + -4) = 2;
  FUN_518022c9(extraout_ECX + 0x13);
  piVar2 = (int *)extraout_ECX[0x12];
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  puVar1 = extraout_ECX + 4;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar1;
  *puVar1 = &PTR_FUN_518198cc;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  FUN_51805e03(puVar1);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_51806355(extraout_ECX + 0x10);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  *puVar1 = &PTR_LAB_51819824;
  FUN_5180847c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


