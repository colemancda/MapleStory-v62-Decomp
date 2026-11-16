/* FUN_5000bfc8 - 0x5000bfc8 in Canvas.dll (image base 0x50000000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "canvas_decls.h"


void FUN_5000bfc8(void)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int unaff_EBP;
  _CIP<IBinding,&struct__GUID_const_IID_IBinding> *p_Var4;
  
  FUN_50012d80();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffffec;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    FUN_5000c048();
    return;
  }
  iVar1 = *(int *)(unaff_EBP + 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  *(undefined4 **)(unaff_EBP + 8) = (undefined4 *)(iVar1 + 0x80);
  FUN_500024f7();
  p_Var4 = (_CIP<IBinding,&struct__GUID_const_IID_IBinding> *)(iVar1 + 0x88);
  iVar2 = *(int *)p_Var4;
  *(undefined1 *)(unaff_EBP + -4) = 1;
  if (iVar2 == 0) {
    FUN_5000c8ce(u_Property_50019500,p_Var4,0);
  }
  piVar3 = *(int **)p_Var4;
  **(undefined4 **)(unaff_EBP + 0xc) = piVar3;
  (**(code **)(*piVar3 + 4))(piVar3);
  piVar3 = (int *)(iVar1 + 0x84);
  *piVar3 = *piVar3 + -1;
  if (*piVar3 == 0) {
    *(undefined4 *)(iVar1 + 0x80) = 0;
  }
  FUN_5000c048();
  return;
}


