/* FUN_005ea669 - 0x005ea669 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005ea669(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)(-(uint)(*(int *)(param_1 + 0x84) != 0) & *(int *)(param_1 + 0x84) - 0xcU);
  if (param_2 == 0) {
    (**(code **)(*piVar4 + 4))(0,0,0,0,0,0,0);
  }
  else {
    iVar1 = *piVar4;
    uVar3 = -(uint)(*(int *)(param_1 + 0x80) != 0) & *(int *)(param_1 + 0x80) - 0xcU;
    uVar2 = FUN_004d19c1((int)*(short *)(uVar3 + 0x1ec));
    (**(code **)(iVar1 + 4))
              (1,(int)*(short *)(uVar3 + 0x1e2),(int)*(short *)(uVar3 + 0x1e4),
               (int)*(short *)(uVar3 + 0x1e6),(int)*(short *)(uVar3 + 0x1e8),
               *(undefined1 *)(uVar3 + 0x1ea),uVar2);
    FUN_005ea6f6();
    *(undefined4 *)(param_1 + 0x88) = 0;
  }
  return;
}


