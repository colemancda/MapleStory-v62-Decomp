/* FUN_005c4d13 - 0x005c4d13 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void __thiscall FUN_005c4d13(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  
  uVar4 = -(uint)(*(int *)(param_1 + 0xec) != 0) & *(int *)(param_1 + 0xec) - 0xcU;
  piVar3 = (int *)(-(uint)(*(int *)(param_1 + 0xf0) != 0) & *(int *)(param_1 + 0xf0) - 0xcU);
  if (param_2 == 0) {
    if (piVar3[6] != 0) {
      iVar2 = FUN_00413367(param_1 + 0x104,*(undefined4 *)(param_1 + 0x10c));
      if ((iVar2 == 3) || (iVar2 == 4)) {
        uVar1 = FUN_004133b5();
        *(undefined4 *)(param_1 + 0x10c) = uVar1;
      }
      else {
        uVar1 = FUN_004133b5();
        *(undefined4 *)(param_1 + 0x10c) = uVar1;
        if ((*(int *)(param_1 + 0x274) == 0) || (iVar2 = *(int *)(param_1 + 0x160), iVar2 == 0)) {
          iVar2 = *(int *)(param_1 + 0x15c);
        }
        uVar1 = FUN_00413367(iVar2 + 0x40,*(undefined4 *)(iVar2 + 0x48));
        FUN_005e4d3f(uVar1,uVar4);
      }
      (**(code **)(*piVar3 + 4))(0,0,0,0,0,0,0);
    }
  }
  else if (piVar3[6] == 0) {
    uVar1 = FUN_004133b5();
    *(undefined4 *)(param_1 + 0x10c) = uVar1;
    iVar2 = *piVar3;
    uVar1 = FUN_004d19c1((int)*(short *)(uVar4 + 0x1ec));
    (**(code **)(iVar2 + 4))
              (1,(int)*(short *)(uVar4 + 0x1e2),(int)*(short *)(uVar4 + 0x1e4),
               (int)*(short *)(uVar4 + 0x1e6),(int)*(short *)(uVar4 + 0x1e8),
               *(undefined1 *)(uVar4 + 0x1ea),uVar1);
  }
  return;
}


