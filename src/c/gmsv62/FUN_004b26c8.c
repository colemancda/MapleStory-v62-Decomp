/* FUN_004b26c8 - 0x004b26c8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_004b26c8(void)

{
  int iVar1;
  undefined4 uVar2;
  int unaff_EBP;
  undefined *puVar3;
  
  FUN_00879bb8();
  uVar2 = FUN_00679d86(unaff_EBP + -0x10,0xa2e);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  FUN_00419192(uVar2);
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  iVar1 = *(int *)(unaff_EBP + 8);
  if (iVar1 == 1) {
    puVar3 = &DAT_00964304;
  }
  else if (iVar1 == 2) {
    puVar3 = &DAT_0096430c;
  }
  else if (iVar1 == 3) {
    puVar3 = &DAT_00964300;
  }
  else if (iVar1 == 4) {
    puVar3 = &DAT_00964d74;
  }
  else if (iVar1 == 5) {
    puVar3 = &DAT_00964d88;
  }
  else if (iVar1 == 6) {
    puVar3 = &DAT_00964d8c;
  }
  else {
    if (iVar1 != 7) goto LAB_004b275a;
    puVar3 = &DAT_00964d90;
  }
  uVar2 = FUN_0087a007(puVar3);
  FUN_0046febf(puVar3,uVar2);
LAB_004b275a:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


