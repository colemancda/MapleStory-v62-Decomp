/* FUN_007a4d1f - 0x007a4d1f in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


int FUN_007a4d1f(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  uVar1 = FUN_0045e4b8();
  if ((uVar1 & 1) == 0) {
    iVar2 = FUN_00429303();
    uVar1 = *(uint *)(iVar2 + 0x108) >> 1 & 1;
    *(uint *)(unaff_EBP + -0x10) = uVar1;
    if (uVar1 != 0) {
      iVar2 = FUN_004029b9(0x90);
      *(int *)(unaff_EBP + -0x10) = iVar2;
      *(undefined4 *)(unaff_EBP + -4) = 0;
      if (iVar2 == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = FUN_005c5810();
      }
      *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
      *(int *)(unaff_EBP + -0x14) = iVar2;
      iVar3 = 0;
      if (iVar2 != 0) {
        InterlockedIncrement((LONG *)(iVar2 + 4));
        iVar3 = *(int *)(unaff_EBP + -0x14);
      }
      iVar2 = *(int *)(unaff_EBP + 8);
      *(int *)(iVar2 + 4) = iVar3;
      if ((iVar3 != 0) &&
         (InterlockedIncrement((LONG *)(iVar3 + 4)), *(int *)(unaff_EBP + -0x14) != 0)) {
        FUN_004d2023(0);
      }
      goto LAB_007a4ddd;
    }
  }
  iVar3 = *(int *)(extraout_ECX + 0x1edc);
  iVar2 = *(int *)(unaff_EBP + 8);
  *(int *)(iVar2 + 4) = iVar3;
  if (iVar3 != 0) {
    InterlockedIncrement((LONG *)(iVar3 + 4));
  }
LAB_007a4ddd:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}


