/* FUN_50813b22 - 0x50813b22 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void __thiscall FUN_50813b22(void *this,int *param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  uint uVar5;
  bool bVar6;
  uint local_8;
  
  piVar4 = *(int **)(param_4 + 0xc);
  if (piVar4 != (int *)0x0) {
    do {
      puVar1 = (uint *)*piVar4;
      iVar2 = *(int *)((-(uint)(piVar4 != (int *)0x0) & (uint)(piVar4 + -4)) + 4);
      piVar4 = (int *)(-(uint)(iVar2 != 0) & iVar2 + 0x10U);
      FUN_50813956(param_1,param_2,param_3,puVar1 + 2);
      (**(code **)(*(int *)((int)this + 8) + 0x38))(puVar1[1],0,0);
      uVar5 = *puVar1;
      local_8 = 0;
      do {
        if ((1 < local_8) || (uVar3 = uVar5, local_8 != 0)) {
          uVar3 = 0;
        }
        uVar3 = (**(code **)(*(int *)((int)this + 8) + 0x1c))(param_1,uVar3);
        bVar6 = uVar5 < uVar3;
        uVar5 = uVar5 - uVar3;
        local_8 = local_8 - bVar6;
      } while (uVar5 != 0 || local_8 != 0);
    } while (piVar4 != (int *)0x0);
  }
  return;
}


