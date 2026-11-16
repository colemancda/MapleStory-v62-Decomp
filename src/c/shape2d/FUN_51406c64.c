/* FUN_51406c64 - 0x51406c64 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


void FUN_51406c64(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  int extraout_ECX;
  int *piVar4;
  int unaff_EBP;
  
  FUN_5140ad20();
  *(undefined4 **)(unaff_EBP + -0x10) = (undefined4 *)(extraout_ECX + 0x14);
  FUN_5140126a();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  piVar4 = *(int **)(extraout_ECX + 0x3c);
  while (piVar4 != (int *)0x0) {
    puVar1 = (undefined4 *)*piVar4;
    iVar2 = *(int *)((-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + -4)) + 4);
    piVar4 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
    if (puVar1 != (undefined4 *)0x0) {
      (**(code **)*puVar1)(1);
    }
  }
  FUN_51409cf6(extraout_ECX + 0x30);
  _CIP<IBinding,&struct__GUID_const_IID_IBinding>::operator=
            ((_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(extraout_ECX + 0x1c),
             (IBinding *)0x0);
  *(undefined4 *)(extraout_ECX + 0x20) = *(undefined4 *)(unaff_EBP + 8);
  uVar3 = *(undefined4 *)(unaff_EBP + 0xc);
  *(undefined4 *)(extraout_ECX + 0x54) = 0;
  *(undefined4 *)(extraout_ECX + 0x24) = uVar3;
  *(undefined4 *)(extraout_ECX + 0x28) = 0;
  *(undefined4 *)(extraout_ECX + 0x2c) = 0;
  piVar4 = (int *)(extraout_ECX + 0x18);
  *piVar4 = *piVar4 + -1;
  if (*piVar4 == 0) {
    *(undefined4 *)(extraout_ECX + 0x14) = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


