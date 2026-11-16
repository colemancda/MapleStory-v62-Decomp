/* FUN_51805a3c - 0x51805a3c in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


void FUN_51805a3c(void)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  CHAR local_10c [260];
  uint local_8;
  
  iVar1 = (*DAT_5181fad0)(0x104,local_10c);
  if (iVar1 == 0) {
    local_10c[0] = '.';
    iVar1 = 1;
  }
  if ((local_10c[iVar1 + -1] != '/') && (local_10c[iVar1 + -1] != '\\')) {
    local_10c[iVar1] = '/';
    iVar1 = iVar1 + 1;
  }
  uVar2 = (*DAT_5181fadc)();
  local_8 = uVar2 + 1;
  wsprintfA(local_10c + iVar1,s_SND_04x_tmp_5181f50c,uVar2 & 0xffff);
  do {
    iVar3 = (*DAT_5181fa84)(local_10c,0xc0000000,0,0,1,0x4000080,0);
    if (iVar3 != -1) {
      return;
    }
    uVar2 = (*DAT_5181fad4)();
    if ((uVar2 != 0xb7) && (uVar2 != 0x50)) {
      if (local_10c[0] == '.') {
        local_8 = uVar2;
                    /* WARNING: Subroutine does not return */
        _CxxThrowException(&local_8,(ThrowInfo *)&DAT_5181b518);
      }
      local_10c[0] = '.';
      local_10c[1] = 0x2f;
      iVar1 = 2;
    }
    uVar2 = local_8 & 0xffff;
    local_8 = local_8 + 1;
    wsprintfA(local_10c + iVar1,s_SND_04x_tmp_5181f50c,uVar2);
  } while( true );
}


