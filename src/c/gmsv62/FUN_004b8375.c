/* FUN_004b8375 - 0x004b8375 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004b8375(undefined4 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 **ppuVar5;
  undefined4 *local_1c [4];
  undefined1 local_c [4];
  int local_8;
  
  iVar4 = 0;
  local_1c[0] = (undefined4 *)0x0;
  local_1c[1] = (undefined4 *)0x0;
  local_1c[2] = (undefined4 *)0x0;
  local_8 = 0;
  ppuVar5 = local_1c;
  local_1c[3] = param_1;
  do {
    iVar1 = *param_2;
    if (iVar1 == 0) {
LAB_004b83b3:
      iVar2 = -1;
    }
    else {
      iVar2 = FUN_0087b4c0(iVar1 + iVar4,0x2f);
      if (iVar2 == 0) goto LAB_004b83b3;
      iVar2 = iVar2 - iVar1;
    }
    if ((local_8 < 2) && (iVar2 < 0)) {
      return 0;
    }
    puVar3 = (undefined4 *)FUN_0045ece0(local_c,iVar4,iVar2);
    puVar3 = (undefined4 *)FUN_0087b6ab(*puVar3);
    *ppuVar5 = puVar3;
    FUN_00414ebb();
    local_8 = local_8 + 1;
    ppuVar5 = ppuVar5 + 1;
    iVar4 = iVar2 + 1;
    if (2 < local_8) {
      *local_1c[3] = local_1c[0];
      local_1c[3][1] = local_1c[1];
      local_1c[3][2] = local_1c[2];
      return 1;
    }
  } while( true );
}


