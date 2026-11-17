/* FUN_00600fd1 - 0x00600fd1 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_00600fd1(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = param_3;
  uVar3 = 0;
  if (*(int *)(param_1 + 8) != 0) {
    uVar3 = *(uint *)(*(int *)(param_1 + 8) + -4);
  }
  uVar4 = (uint)*(ushort *)(param_1 + 0xc) + param_3;
  if (uVar3 < uVar4) {
    iVar1 = *(int *)(param_1 + 8);
    uVar3 = 0;
    if (iVar1 != 0) {
      uVar3 = *(uint *)(iVar1 + -4);
    }
    do {
      uVar3 = uVar3 * 2;
    } while (uVar3 < uVar4);
    FUN_0045ebec(uVar3,0,(int)&param_3 + 3);
  }
  FUN_00879c20((uint)*(ushort *)(param_1 + 0xc) + *(int *)(param_1 + 8),param_2,iVar2);
  *(short *)(param_1 + 0xc) = *(short *)(param_1 + 0xc) + (short)iVar2;
  return;
}


