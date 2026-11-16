/* FUN_51409688 - 0x51409688 in Shape2D.dll (image base 0x51400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "shape2d_decls.h"


undefined4 __thiscall FUN_51409688(void *this,undefined4 *param_1,uint param_2,undefined4 *param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 *puVar3;
  double in_stack_ffffff74;
  undefined4 uVar4;
  undefined8 *puVar5;
  double in_stack_ffffff84;
  undefined4 uVar6;
  double in_stack_ffffff94;
  undefined4 uVar7;
  undefined8 *puVar8;
  double in_stack_ffffffa4;
  undefined4 uVar9;
  uint *puVar10;
  double local_3c [2];
  undefined8 local_2c [2];
  undefined8 local_1c [2];
  double local_c;
  
  puVar10 = &param_2;
  uVar9 = 0x514096a2;
  iVar2 = FUN_51409860(this,puVar10,&local_c,param_2);
  uVar1 = param_2;
  if (-1 < iVar2) {
    if (iVar2 < 1) {
      iVar2 = *(int *)((-(uint)(param_2 != 0) & param_2 - 0x10) + 4);
      param_2 = -(uint)(iVar2 != 0) & iVar2 + 0x10U;
      FUN_5140978a();
      FUN_5140978a();
      puVar8 = (undefined8 *)(uVar1 + 0x18);
      uVar7 = 0x5140971d;
      FUN_51409777(&stack0xffffffa4,puVar8);
      puVar3 = (undefined8 *)(uVar1 + 8);
      uVar6 = 0x5140972b;
      FUN_51409777(&stack0xffffff94,puVar3);
      puVar5 = local_1c;
      uVar4 = 0x51409739;
      FUN_51409777(&stack0xffffff84,puVar5);
      FUN_51409777(&stack0xffffff74,local_2c);
      FUN_51409d84(local_3c,in_stack_ffffff74,(double)CONCAT44(puVar5,uVar4),in_stack_ffffff84,
                   (double)CONCAT44(puVar3,uVar6),in_stack_ffffff94,(double)CONCAT44(puVar8,uVar7),
                   in_stack_ffffffa4,(double)CONCAT44(puVar10,uVar9),local_c);
      uVar9 = ftol();
      uVar4 = ftol();
      *param_1 = uVar9;
      param_1[1] = uVar4;
    }
    else if (param_3 != (undefined4 *)0x0) {
      if (*(int *)((int)this + 0x10) == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = **(undefined4 **)((int)this + 0x18);
        **(undefined4 **)((int)this + 0x18) = 0;
      }
      *param_3 = uVar9;
      return 0;
    }
  }
  return 1;
}


