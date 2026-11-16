/* FUN_51809cb3 - 0x51809cb3 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51809cb3(void)

{
  int *piVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *this;
  int unaff_EBP;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  puVar3 = (undefined4 *)this[6];
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + -0x14) = puVar3;
  FUN_518017b5();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5180a2f4(this,(int *)0x1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  this[0xe] = 1;
  piVar4 = (int *)this[0xc];
  this[0xc] = 0;
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  iVar2 = *piVar1;
  *(int **)(unaff_EBP + -0x10) = piVar4;
  if (iVar2 == 0) {
    *puVar3 = 0;
  }
  if ((piVar4 != (int *)0x0) && (piVar4 != this)) {
    (**(code **)(*piVar4 + 0x14))(piVar4,this[0xd]);
  }
  FUN_51804b19();
  FUN_51809d68();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_51801359();
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    FUN_51813012(unaff_EBP + -0x18);
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


