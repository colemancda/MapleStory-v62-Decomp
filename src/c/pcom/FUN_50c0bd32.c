/* FUN_50c0bd32 - 0x50c0bd32 in PCOM.dll (image base 0x50c00000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "pcom_decls.h"


uint FUN_50c0bd32(int param_1,uint param_2,int param_3,uint *param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  uVar3 = 0;
  if (param_3 == 0) {
    uVar1 = 0x80004003;
  }
  else {
    uVar1 = *(uint *)(param_1 + 0x24);
    uVar2 = uVar1;
    if (param_2 != 0) {
      do {
        uVar2 = 0;
        if (uVar1 == 0) break;
        uVar1 = -(uint)(*(int *)(uVar1 - 0xc) != 0) & *(int *)(uVar1 - 0xc) + 0x10U;
        param_3 = param_3 + 0x10;
        uVar2 = FUN_50c0bdbc();
        if ((int)uVar2 < 0) {
          return uVar2;
        }
        uVar3 = uVar3 + 1;
        uVar2 = uVar1;
      } while (uVar3 < param_2);
    }
    if (param_4 != (uint *)0x0) {
      *param_4 = uVar3;
    }
    uVar1 = (uint)(uVar3 != param_2);
    if (uVar3 < param_2) {
      iVar4 = param_2 - uVar3;
      do {
        Ordinal_8(param_3);
        iVar4 = iVar4 + -1;
        param_3 = param_3 + 0x10;
      } while (iVar4 != 0);
    }
    *(uint *)(param_1 + 0x24) = uVar2;
  }
  return uVar1;
}


