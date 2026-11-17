/* FUN_006740a7 - 0x006740a7 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 FUN_006740a7(int param_1,undefined4 param_2,undefined4 param_3,int *param_4,int *param_5)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  undefined1 local_20 [4];
  int local_1c;
  
  iVar2 = (*DAT_0097b4f0)(param_1,local_20,0x1c);
  if ((iVar2 != 0) && (iVar2 = (*DAT_0097b384)(local_1c,param_2,param_3), iVar2 != 0)) {
    iVar2 = *(int *)(local_1c + 0x3c);
    uVar4 = (uint)*(ushort *)(iVar2 + 6 + local_1c);
    uVar6 = param_1 - local_1c;
    uVar5 = 0;
    if (uVar4 != 0) {
      puVar3 = (uint *)((uint)*(ushort *)(iVar2 + 0x14 + local_1c) + iVar2 + local_1c + 0x20);
      do {
        uVar1 = puVar3[1];
        uVar7 = puVar3[2];
        if (puVar3[2] <= *puVar3) {
          uVar7 = *puVar3;
        }
        if ((uVar1 <= uVar6) && (uVar6 <= uVar7 + uVar1)) {
          *param_4 = uVar5 + 1;
          *param_5 = uVar6 - uVar1;
          return 1;
        }
        uVar5 = uVar5 + 1;
        puVar3 = puVar3 + 10;
      } while (uVar5 < uVar4);
    }
  }
  return 0;
}


