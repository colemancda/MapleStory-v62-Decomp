/* FUN_50813070 - 0x50813070 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50813070(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CHAR local_114 [260];
  int local_10;
  int local_c;
  uint local_8;
  
  iVar1 = (*DAT_5081e700)(0x104,local_114);
  if (iVar1 == 0) {
    local_114[0] = '.';
    iVar1 = 1;
  }
  if ((local_114[iVar1 + -1] != '/') && (local_114[iVar1 + -1] != '\\')) {
    local_114[iVar1] = '/';
    iVar1 = iVar1 + 1;
  }
  uVar2 = (*DAT_5081e70c)();
  local_8 = uVar2 + 1;
  wsprintfA(local_114 + iVar1,s_PKG_04x_tmp_5081e528,uVar2 & 0xffff);
  do {
    local_10 = (*DAT_5081e6b4)(local_114,0xc0000000,0,0,1,0x4000080,0);
    if (local_10 != -1) {
      FUN_50813cc9(local_c + 0x10);
      FUN_5080dea3((void *)(*(int *)(local_c + 0x14) + 8),local_10,1);
      iVar1 = *(int *)(local_c + 0x14) + 0x44;
      FUN_50813c79(iVar1);
      FUN_50813bd9((void *)(local_c + 0x18),iVar1);
      FUN_50813c46(*(int *)(local_c + 0x1c) + 0x10);
      return;
    }
    iVar3 = (*DAT_5081e704)();
    if ((iVar3 != 0xb7) && (iVar3 != 0x50)) {
      if (local_114[0] == '.') {
        local_c = iVar3;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_c,(ThrowInfo *)&DAT_5081ae30);
      }
      local_114[0] = '.';
      local_114[1] = 0x2f;
      iVar1 = 2;
    }
    uVar2 = local_8 & 0xffff;
    local_8 = local_8 + 1;
    wsprintfA(local_114 + iVar1,s_PKG_04x_tmp_5081e528,uVar2);
  } while( true );
}


