/* FUN_5041c6ca - 0x5041c6ca in Gr2D_DX8.dll (image base 0x50400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gr2d_dx8_decls.h"


undefined4 * __thiscall FUN_5041c6ca(void *this,undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  
  uVar4 = 1;
  FUN_50418bd2(this,param_1,0,1);
  *(undefined ***)this = &PTR_FUN_5042e1bc;
  if (param_1[6] == 1) {
    *(undefined4 *)((int)this + 0x1078) = 0;
  }
  else if (param_1[6] == 2) {
    *(undefined4 *)((int)this + 0x1078) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x1078) = 3;
  }
  if (param_1[7] == 1) {
    *(undefined4 *)((int)this + 0x107c) = 0;
  }
  else if (param_1[7] == 2) {
    *(undefined4 *)((int)this + 0x107c) = 1;
  }
  else {
    *(undefined4 *)((int)this + 0x107c) = 3;
  }
  if ((*(int *)((int)this + 0x1078) == 3) && (*(int *)((int)this + 0x107c) == 3)) {
    uVar4 = 0;
  }
  *(undefined4 *)((int)this + 0x1074) = uVar4;
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 == 0x31545844) {
    *(undefined4 *)((int)this + 0x1080) = 8;
    *(undefined1 **)((int)this + 0x1088) = &LAB_5041f0ad;
    *(code **)((int)this + 0x1084) = FUN_5041edb0;
  }
  else if (iVar1 == 0x32545844) {
    *(undefined4 *)((int)this + 0x1080) = 0x10;
    *(code **)((int)this + 0x1088) = FUN_5041f671;
    *(undefined1 **)((int)this + 0x1084) = &LAB_5041f62b;
  }
  else if (iVar1 == 0x33545844) {
    *(undefined4 *)((int)this + 0x1080) = 0x10;
    *(code **)((int)this + 0x1088) = FUN_5041f0c5;
    *(code **)((int)this + 0x1084) = FUN_5041eeee;
  }
  else if (iVar1 == 0x34545844) {
    *(undefined4 *)((int)this + 0x1080) = 0x10;
    *(code **)((int)this + 0x1088) = FUN_5041f6a5;
    *(undefined1 **)((int)this + 0x1084) = &LAB_5041f64e;
  }
  else if (iVar1 == 0x35545844) {
    *(undefined4 *)((int)this + 0x1080) = 0x10;
    *(code **)((int)this + 0x1088) = FUN_5041f1d9;
    *(code **)((int)this + 0x1084) = FUN_5041ef71;
  }
  *(undefined4 *)((int)this + 0x10b0) = 0xffffffff;
  *(undefined4 *)((int)this + 0x10b4) = 0xffffffff;
  *(undefined4 *)((int)this + 0x109c) = *(undefined4 *)((int)this + 0x1040);
  uVar2 = *(int *)((int)this + 0x1038) + 3U & 0xfffffffc;
  uVar6 = *(uint *)((int)this + 0x1030) & 0xfffffffc;
  *(uint *)((int)this + 0x1094) = uVar2;
  uVar5 = *(uint *)((int)this + 0x1034) & 0xfffffffc;
  uVar3 = *(int *)((int)this + 0x103c) + 3U & 0xfffffffc;
  *(uint *)((int)this + 0x1098) = uVar3;
  *(uint *)((int)this + 0x10a4) = uVar2 - uVar6 >> 2;
  *(int *)((int)this + 0x10a0) = *(int *)((int)this + 0x1044);
  *(uint *)((int)this + 0x108c) = uVar6;
  *(undefined4 *)((int)this + 0x10b8) = 0;
  *(undefined4 *)((int)this + 0x10bc) = 0;
  *(undefined4 *)((int)this + 0x10c0) = 0;
  *(uint *)((int)this + 0x1090) = uVar5;
  *(uint *)((int)this + 0x10a8) = uVar3 - uVar5 >> 2;
  *(int *)((int)this + 0x10ac) = *(int *)((int)this + 0x1044) - *(int *)((int)this + 0x1040);
  return this;
}


