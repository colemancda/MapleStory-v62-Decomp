/* FUN_0077ed03 - 0x0077ed03 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0077ed03(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  int iVar5;
  
  FUN_00879bb8();
  piVar1 = *(int **)(unaff_EBP + 0xc);
  iVar3 = (*DAT_0097b57c)(*(undefined4 *)(unaff_EBP + 0x10),piVar1[1],piVar1[2]);
  uVar4 = 0;
  if (iVar3 != 0) {
    *(int *)(unaff_EBP + -0x10) = piVar1[2];
    *(undefined4 *)(unaff_EBP + -0x18) = 0;
    *(undefined4 *)(unaff_EBP + -0x24) = 1;
    *(undefined4 *)(unaff_EBP + -0x20) = 0;
    *(int *)(unaff_EBP + -0x14) = piVar1[1] + 6;
    *(int *)(unaff_EBP + -0x10) =
         *(int *)(unaff_EBP + -0x10) + *(int *)(unaff_EBP + 0x14) * -0x21 + 0x71;
    *(int *)(unaff_EBP + 0x10) = *(int *)(unaff_EBP + 0x14) * 0x21;
    *(undefined4 *)(unaff_EBP + -0x1c) = 0;
    iVar3 = *(int *)(extraout_ECX + 0x668 + (uint)(*(int *)(unaff_EBP + 8) == 0) * 8);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      uVar4 = FUN_00679d86(unaff_EBP + 0xc,0x4f2 - (uint)(*piVar1 != 0));
      *(undefined1 *)(unaff_EBP + -4) = 1;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iVar3 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + 0xc) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 2;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00450382(uVar4);
      (**(code **)(**(int **)(iVar3 + 4) + 0x20))
                (extraout_ECX,0x817 - (uint)(*(int *)(unaff_EBP + 8) != 0),
                 *(int *)(unaff_EBP + -0x14) + 0x5f,*(undefined4 *)(unaff_EBP + -0x10),0,
                 unaff_EBP + -0x24);
    }
    iVar3 = piVar1[4];
    *(int *)(unaff_EBP + -0x14) = piVar1[3] + 6;
    iVar5 = (-(uint)(*(int *)(unaff_EBP + 8) != 0) & 0xfffffffe) + 4;
    iVar2 = *(int *)(extraout_ECX + 0x668 + iVar5 * 8);
    *(int *)(unaff_EBP + -0x10) = iVar3 + (0x71 - *(int *)(unaff_EBP + 0x10));
    if (iVar2 == 0) {
      uVar4 = FUN_00679d86(unaff_EBP + 0xc,0xde2);
      *(undefined1 *)(unaff_EBP + -4) = 3;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iVar3 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + 0xc) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00450382(uVar4);
      (**(code **)(**(int **)(iVar3 + 4) + 0x20))
                (extraout_ECX,(-(uint)(*(int *)(unaff_EBP + 8) != 0) & 0xfffffffe) + 0x81a,
                 *(undefined4 *)(unaff_EBP + -0x14),*(undefined4 *)(unaff_EBP + -0x10),0,
                 unaff_EBP + -0x24);
      if (piVar1[6] == 1) {
        (**(code **)(*(int *)(*(int *)(extraout_ECX + 0x668 + iVar5 * 8) + 4) + 0x1c))(0);
      }
    }
    iVar3 = *(int *)(extraout_ECX + 0x670 + iVar5 * 8);
    *(int *)(unaff_EBP + 0x10) = extraout_ECX + 0x670 + iVar5 * 8;
    if (iVar3 == 0) {
      uVar4 = FUN_00679d86(unaff_EBP + 0xc,0xde3);
      *(undefined1 *)(unaff_EBP + -4) = 5;
      FUN_00419192(uVar4);
      *(undefined1 *)(unaff_EBP + -4) = 0;
      FUN_00402676();
      iVar3 = FUN_004029b9(0x578);
      *(int *)(unaff_EBP + 0x14) = iVar3;
      *(undefined1 *)(unaff_EBP + -4) = 6;
      if (iVar3 == 0) {
        uVar4 = 0;
      }
      else {
        uVar4 = FUN_0044f3fa();
      }
      *(undefined1 *)(unaff_EBP + -4) = 0;
      iVar3 = FUN_00450382(uVar4);
      (**(code **)(**(int **)(iVar3 + 4) + 0x20))
                (extraout_ECX,(-(uint)(*(int *)(unaff_EBP + 8) != 0) & 0xfffffffe) + 0x81b,
                 *(int *)(unaff_EBP + -0x14) + piVar1[5],*(undefined4 *)(unaff_EBP + -0x10),0,
                 unaff_EBP + -0x24);
      if (piVar1[6] == piVar1[7]) {
        (**(code **)(*(int *)(**(int **)(unaff_EBP + 0x10) + 4) + 0x1c))(0);
      }
    }
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00402676();
    uVar4 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


