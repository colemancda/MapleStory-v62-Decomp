/* FUN_50809237 - 0x50809237 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


uint FUN_50809237(int param_1,uint param_2,undefined2 *param_3,uint *param_4)

{
  undefined2 *puVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  void *this;
  uint local_8;
  
  if (param_3 == (undefined2 *)0x0) {
    uVar2 = 0x80004003;
  }
  else {
    local_8 = 0;
    pvVar3 = *(void **)(param_1 + 0x24);
    this = pvVar3;
    if (param_2 != 0) {
      do {
        pvVar3 = (void *)0x0;
        if (this == (void *)0x0) break;
        puVar1 = param_3 + 8;
        pvVar3 = (void *)(-(uint)(*(int *)((int)this + -0xc) != 0) &
                         *(int *)((int)this + -0xc) + 0x10U);
        uVar2 = FUN_50805c71(this,(undefined4 *)(param_3 + 4));
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        *param_3 = 8;
        local_8 = local_8 + 1;
        this = pvVar3;
        param_3 = puVar1;
      } while (local_8 < param_2);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = local_8;
    }
    uVar2 = (uint)(local_8 != param_2);
    if (local_8 < param_2) {
      iVar4 = param_2 - local_8;
      do {
        Ordinal_8(param_3);
        iVar4 = iVar4 + -1;
        param_3 = param_3 + 8;
      } while (iVar4 != 0);
    }
    *(void **)(param_1 + 0x24) = pvVar3;
  }
  return uVar2;
}


