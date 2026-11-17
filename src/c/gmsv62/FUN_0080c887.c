/* FUN_0080c887 - 0x0080c887 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_0080c887(int param_1,int param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int **in_stack_00000018;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int *piStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  int *piStack_18;
  undefined4 *puStack_14;
  
  if (*(int *)(param_1 + 0x58) == 0) {
    if (param_2 == 0xfa) {
      *(undefined4 *)(param_1 + 0x60) = 1;
      puStack_14 = (undefined4 *)0x80c925;
      uVar2 = (*DAT_0097b704)();
      piVar1 = (int *)in_stack_00000018;
      *(undefined4 *)(param_1 + 100) = uVar2;
      uStack_28 = *(undefined4 *)(*(int *)((int)*in_stack_00000018 + 0x58) + 8);
      puStack_14 = (undefined4 *)0x0;
      piStack_18 = (int *)0x0;
      uStack_1c = 0;
      uStack_20 = 0;
      uStack_24 = 0xffffffff;
      uStack_2c = 0;
      piStack_30 = (int *)0x0;
      uStack_34 = 0x80c942;
      (*DAT_0097b4cc)();
      uStack_34 = 0x80c94d;
      FUN_0087a1b0();
      uStack_34 = 0;
      uStack_38 = 0;
      in_stack_00000018 = &piStack_30;
      (*DAT_0097b4cc)(0,0,*(undefined4 *)(*(int *)(*piVar1 + 0x58) + 8),0xffffffff,&piStack_30,
                      0x3fffffff);
      (**(code **)(*(int *)(param_1 + -0x588) + 0x3c))(in_stack_00000018);
    }
    else {
      if (param_2 == 0xfb) {
        **(undefined2 **)((int)*in_stack_00000018 + 8) = 1;
        return 0;
      }
      if (param_2 == 0xfc) {
        piStack_18 = *(int **)(param_1 + 0x14);
        puStack_14 = &stack0x00000018;
        uStack_1c = 0x80c8bc;
        (**(code **)(*piStack_18 + 0x78))();
        uStack_1c = 0;
        uStack_20 = 0;
        uStack_24 = 0;
        uStack_28 = 0;
        uStack_2c = 0xffffffff;
        piStack_30 = (int *)in_stack_00000018;
        uStack_34 = 0;
        uStack_38 = 0;
        (*DAT_0097b4cc)();
        FUN_0087a1b0();
        (*DAT_0097b4cc)(0,0,in_stack_00000018,0xffffffff,&uStack_38,0x3fffffff,0,0);
        (**(code **)(*(int *)(param_1 + -0x588) + 0x38))(&uStack_38);
        *(undefined4 *)(param_1 + 0x60) = 0;
        *(undefined4 *)(param_1 + 100) = 0;
      }
    }
  }
  return 0x80020003;
}


