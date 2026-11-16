/* FUN_5180b19e - 0x5180b19e in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 * FUN_5180b19e(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int extraout_ECX;
  int iVar3;
  int unaff_EBP;
  undefined4 *puVar4;
  
  FUN_5180ea30();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  *(undefined4 *)(unaff_EBP + -0x4c) = 0x24;
  *(undefined4 *)(unaff_EBP + -4) = 1;
  puVar4 = (undefined4 *)(unaff_EBP + -0x48);
  for (iVar3 = 8; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = 0;
    puVar4 = puVar4 + 1;
  }
  iVar3 = FUN_51804b19();
  *(uint *)(unaff_EBP + -0x48) = -(uint)(*(int *)(iVar3 + 0x18) != 0) & 0x8000 | 0x10180;
  iVar3 = *(int *)(extraout_ECX + 100);
  *(undefined4 *)(unaff_EBP + -0x44) = *(undefined4 *)(iVar3 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x3c) = *(undefined4 *)(iVar3 + 0x5c);
  FUN_51804b19();
  piVar2 = FUN_5180b28e();
  piVar2 = (int *)*piVar2;
  iVar3 = *piVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar3 = (**(code **)(iVar3 + 0xc))(piVar2,unaff_EBP + -0x4c,unaff_EBP + -0x10,0);
  piVar2 = *(int **)(unaff_EBP + -0x14);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  if (iVar3 < 0) {
    FUN_51802c9b((void *)(unaff_EBP + -0x28),iVar3,(int *)0x0,'\0');
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x28),(ThrowInfo *)&DAT_5181a2e0);
  }
  puVar4 = *(undefined4 **)(unaff_EBP + -0x10);
  puVar1 = *(undefined4 **)(unaff_EBP + 8);
  *puVar1 = 0;
  piVar2 = (int *)0x0;
  if (puVar4 != (undefined4 *)0x0) {
    (**(code **)*puVar4)(puVar4,&DAT_51819f10,puVar1);
    piVar2 = *(int **)(unaff_EBP + -0x10);
  }
  *(undefined4 *)(unaff_EBP + -0x18) = 1;
  *(undefined1 *)(unaff_EBP + -4) = 0;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return puVar1;
}


