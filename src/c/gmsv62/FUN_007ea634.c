/* FUN_007ea634 - 0x007ea634 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007ea634(void)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -0x10) = 0;
  FUN_0064961c();
  *(undefined4 *)(unaff_EBP + -0x24) = 0;
  *(undefined4 *)(unaff_EBP + -0x30) = 1;
  *(undefined4 *)(unaff_EBP + -0x2c) = 0;
  *(undefined4 *)(unaff_EBP + -0x28) = 0;
  iVar3 = *(int *)(extraout_ECX + 0xa0);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar3 == 0) {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x8be);
    *(undefined4 *)(unaff_EBP + -0x10) = 2;
    *(undefined4 *)(unaff_EBP + -4) = 2;
  }
  else {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0xc6a);
    *(undefined4 *)(unaff_EBP + -0x10) = 1;
    *(undefined1 *)(unaff_EBP + -4) = 1;
  }
  *(undefined4 *)(unaff_EBP + -0x14) = *puVar2;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0x8b0);
  uVar4 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 3;
  FUN_007e6c97(unaff_EBP + -0x24,uVar4,*(undefined4 *)(unaff_EBP + -0x14));
  *(undefined1 *)(unaff_EBP + -4) = 2;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 1;
  if ((*(byte *)(unaff_EBP + -0x10) & 2) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffd;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 1) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffffe;
    FUN_00402676();
  }
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 4;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x644) + 0x20))
            (extraout_ECX,6,
             *(int *)(extraout_ECX + 0x1c) -
             ((-(uint)(*(int *)(extraout_ECX + 0xa0) != 0) & 0xb) * 2 + 0x6c),
             *(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x30);
  uVar4 = FUN_007eec01(0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  FUN_00450479();
  FUN_00450463();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4) = *(undefined4 *)(extraout_ECX + 0x644);
  if (*(int *)(extraout_ECX + 0xa0) == 0) {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x8bf);
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 8;
    *(undefined4 *)(unaff_EBP + -4) = 6;
  }
  else {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x18,0xc6b);
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) | 4;
    *(undefined1 *)(unaff_EBP + -4) = 5;
  }
  uVar4 = *puVar2;
  puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x8b0);
  uVar1 = *puVar2;
  *(undefined4 *)(unaff_EBP + -4) = 7;
  FUN_007e6c97(unaff_EBP + -0x24,uVar1,uVar4);
  *(undefined1 *)(unaff_EBP + -4) = 6;
  FUN_00402676();
  *(undefined4 *)(unaff_EBP + -4) = 5;
  if ((*(byte *)(unaff_EBP + -0x10) & 8) != 0) {
    *(uint *)(unaff_EBP + -0x10) = *(uint *)(unaff_EBP + -0x10) & 0xfffffff7;
    FUN_00402676();
  }
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if ((*(byte *)(unaff_EBP + -0x10) & 4) != 0) {
    FUN_00402676();
  }
  iVar3 = FUN_004029b9(0x578);
  *(int *)(unaff_EBP + -0x20) = iVar3;
  *(undefined1 *)(unaff_EBP + -4) = 8;
  if (iVar3 == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = FUN_0044f3fa();
  }
  *(undefined1 *)(unaff_EBP + -4) = 0;
  FUN_00450382(uVar4);
  (**(code **)(**(int **)(extraout_ECX + 0x64c) + 0x20))
            (extraout_ECX,7,
             (*(int *)(extraout_ECX + 0x1c) -
             ((-(uint)(*(int *)(extraout_ECX + 0xa0) != 0) & 0xb) + 0x2c)) + -10,
             *(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x30);
  uVar4 = FUN_007eec01(0xffffffff);
  *(undefined4 *)(unaff_EBP + -0x14) = uVar4;
  FUN_00450479();
  FUN_00450463();
  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 4) = *(undefined4 *)(extraout_ECX + 0x64c);
  if (*(int *)(extraout_ECX + 0x698) == 0) {
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x1c,0x8bd);
    uVar4 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 9;
    puVar2 = (undefined4 *)FUN_00679d86(unaff_EBP + -0x20,0x8b0);
    uVar1 = *puVar2;
    *(undefined1 *)(unaff_EBP + -4) = 10;
    FUN_007e6c97(unaff_EBP + -0x24,uVar1,uVar4);
    *(undefined1 *)(unaff_EBP + -4) = 9;
    FUN_00402676();
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00402676();
    iVar3 = FUN_004029b9(0x578);
    *(int *)(unaff_EBP + -0x18) = iVar3;
    *(undefined1 *)(unaff_EBP + -4) = 0xb;
    if (iVar3 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = FUN_0044f3fa();
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00450382(uVar4);
    (**(code **)(**(int **)(extraout_ECX + 0x654) + 0x20))
              (extraout_ECX,2,9,*(int *)(extraout_ECX + 0x20) + -0x1a,0,unaff_EBP + -0x30);
  }
  *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00402676();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


