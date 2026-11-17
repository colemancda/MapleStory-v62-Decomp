/* FUN_007e14b4 - 0x007e14b4 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007e14b4(void)

{
  undefined4 uVar1;
  int iVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  *(undefined4 *)(unaff_EBP + -4) = 0;
  uVar1 = FUN_00679d86(unaff_EBP + -0x10,0x4ed);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_00419192(uVar1);
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00402676();
  iVar2 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x14) = iVar2;
  *(undefined1 *)(unaff_EBP + -4) = 2;
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar1);
  iVar2 = *(int *)(extraout_ECX + 0x74);
  if (iVar2 == 0) {
LAB_007e1547:
    iVar2 = **(int **)(extraout_ECX + 0x7c);
    uVar1 = 0x57;
  }
  else {
    if (iVar2 != 1) {
      if (iVar2 == 2) goto LAB_007e1547;
      if (iVar2 != 3) goto LAB_007e1571;
    }
    iVar2 = **(int **)(extraout_ECX + 0x7c);
    uVar1 = 0x67;
  }
  (**(code **)(iVar2 + 0x20))(extraout_ECX,1000,0x6e,uVar1,0,unaff_EBP + -0x24);
LAB_007e1571:
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


