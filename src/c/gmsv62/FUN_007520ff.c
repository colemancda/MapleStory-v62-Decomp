/* FUN_007520ff - 0x007520ff in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void FUN_007520ff(int param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  
  uVar2 = FUN_0045e2eb();
  iVar3 = FUN_0054e7b3(uVar2);
  iVar1 = DAT_00978368;
  uVar2 = FUN_0045e2eb();
  uVar6 = 0;
  uVar4 = (**(code **)(*param_2 + 4))(0);
  FUN_00757a6e(10,param_1 + 0x20,uVar2,uVar4,uVar6);
  uVar2 = FUN_00413367(iVar1 + 0x20a8,*(undefined4 *)(iVar1 + 0x20b0));
  uVar4 = FUN_00413367(iVar3 + 0x60,*(undefined4 *)(iVar3 + 0x68));
  FUN_00758f91(uVar4,uVar2,0,param_1,0,0);
  uVar2 = FUN_00413367(iVar1 + 0x20c0,*(undefined4 *)(iVar1 + 0x20c8));
  uVar4 = FUN_00413367(iVar3 + 0x18,*(undefined4 *)(iVar3 + 0x20));
  FUN_00758f91(uVar4,uVar2,1,param_1,0,0);
  uVar2 = FUN_00413367(iVar1 + 0x20cc,*(undefined4 *)(iVar1 + 0x20d4));
  uVar4 = FUN_00413367(iVar3 + 0x30,*(undefined4 *)(iVar3 + 0x38));
  FUN_00758f91(uVar4,uVar2,2,param_1,0,0);
  uVar2 = FUN_00413367(iVar1 + 0x20d8,*(undefined4 *)(iVar1 + 0x20e0));
  uVar4 = FUN_00413367(iVar3 + 0x24,*(undefined4 *)(iVar3 + 0x2c));
  FUN_00758f91(uVar4,uVar2,3,param_1,0,0);
  uVar2 = FUN_00413367(iVar1 + 0x20e4,*(undefined4 *)(iVar1 + 0x20ec));
  uVar4 = FUN_00413367(iVar3 + 0x3c,*(undefined4 *)(iVar3 + 0x44));
  FUN_00758f91(uVar4,uVar2,4,param_1,0,0);
  iVar5 = FUN_00413367(iVar3 + 0x48,*(undefined4 *)(iVar3 + 0x50));
  uVar2 = FUN_00413367(iVar1 + 0x20f0,*(undefined4 *)(iVar1 + 0x20f8));
  uVar4 = FUN_00413367(iVar3 + 0x48,*(undefined4 *)(iVar3 + 0x50));
  FUN_00758f91(uVar4,uVar2,5,param_1,iVar5 == 0,0);
  uVar2 = FUN_00413367(iVar3 + 0x54,*(undefined4 *)(iVar3 + 0x5c));
  FUN_00751502(param_1,uVar2);
  return;
}


