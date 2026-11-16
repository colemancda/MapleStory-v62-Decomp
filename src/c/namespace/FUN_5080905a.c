/* FUN_5080905a - 0x5080905a in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


int FUN_5080905a(void)

{
  undefined4 *puVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_5080e090();
  puVar1 = (undefined4 *)*extraout_ECX;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (puVar1 == (undefined4 *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
  }
  else {
    iVar4 = (**(code **)*puVar1)(puVar1,&DAT_5081d1f0,unaff_EBP + -0x10);
    if (iVar4 < 0) {
      FUN_5080dfed(iVar4);
    }
    (**(code **)(**(int **)(unaff_EBP + -0x10) + 8))(*(int **)(unaff_EBP + -0x10));
  }
  piVar2 = *(int **)(unaff_EBP + 8);
  if (piVar2 == (int *)0x0) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0;
  }
  else {
    iVar4 = (**(code **)*piVar2)(piVar2,&DAT_5081d1f0,unaff_EBP + -0x14);
    if (iVar4 < 0) {
      FUN_5080dfed(iVar4);
    }
    (**(code **)(**(int **)(unaff_EBP + -0x14) + 8))(*(int **)(unaff_EBP + -0x14));
  }
  iVar4 = *(int *)(unaff_EBP + -0x10);
  iVar3 = *(int *)(unaff_EBP + -0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 8))(piVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar4 - iVar3 >> 2;
}


