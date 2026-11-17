/* ptr_0077f045 - 0x0077f045 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __fastcall ptr_0077f045(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int unaff_EBP;
  int *unaff_ESI;
  int unaff_EDI;
  
  iVar1 = *(int *)(unaff_EBP + 0x14) * 0x21;
  *(int *)(unaff_EBP + 0x10) = iVar1;
  *(int *)(unaff_EBP + -0x10) = param_1 + *(int *)(unaff_EBP + 0x14) * -0x21 + 0x71;
  *(undefined4 *)(unaff_EBP + -0x18) = 0;
  *(undefined4 *)(unaff_EBP + -0x24) = 1;
  *(undefined4 *)(unaff_EBP + -0x20) = 0;
  *(undefined4 *)(unaff_EBP + -0x1c) = 0;
  iVar3 = *(int *)(unaff_EDI + 0x6f8 + *(int *)(unaff_EBP + 8) * 8);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    uVar2 = FUN_00679d86(unaff_EBP + 0xc,0x4f2 - (uint)(*unaff_ESI != 0));
    *(undefined1 *)(unaff_EBP + -4) = 1;
    FUN_00419192(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + 0xc) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 2;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00450382(uVar2);
    (**(code **)(**(int **)(iVar3 + 4) + 0x20))();
    iVar1 = *(int *)(unaff_EBP + 0x10);
  }
  *(int *)(unaff_EBP + -0x14) = unaff_ESI[3];
  iVar3 = unaff_ESI[4];
  *(int *)(unaff_EBP + -0x14) = *(int *)(unaff_EBP + -0x14) + 6;
  *(int *)(unaff_EBP + -0x10) = iVar3;
  *(int *)(unaff_EBP + -0x10) = *(int *)(unaff_EBP + -0x10) + (0x71 - iVar1);
  if (*(int *)(unaff_EDI + 0x720 + *(int *)(unaff_EBP + 8) * 0x10) == 0) {
    uVar2 = FUN_00679d86(unaff_EBP + 0xc,0xde2);
    *(undefined1 *)(unaff_EBP + -4) = 3;
    FUN_00419192(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + 0xc) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 4;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00450382(uVar2);
    (**(code **)(**(int **)(iVar3 + 4) + 0x20))();
    if (unaff_ESI[6] == 1) {
      (**(code **)(*(int *)(*(int *)(unaff_EDI + 0x720 + *(int *)(unaff_EBP + 8) * 0x10) + 4) + 0x1c
                  ))(0);
    }
  }
  iVar3 = *(int *)(unaff_EDI + 0x728 + *(int *)(unaff_EBP + 8) * 0x10);
  *(int *)(unaff_EBP + 0x10) = unaff_EDI + 0x728 + *(int *)(unaff_EBP + 8) * 0x10;
  if (iVar3 == 0) {
    uVar2 = FUN_00679d86(unaff_EBP + 0xc,0xde3);
    *(undefined1 *)(unaff_EBP + -4) = 5;
    FUN_00419192(uVar2);
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + 0x14) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 6;
    if (iVar3 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    iVar3 = FUN_00450382(uVar2);
    (**(code **)(**(int **)(iVar3 + 4) + 0x20))();
    if (unaff_ESI[6] == unaff_ESI[7]) {
      (**(code **)(*(int *)(**(int **)(unaff_EBP + 0x10) + 4) + 0x1c))(0);
    }
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}


