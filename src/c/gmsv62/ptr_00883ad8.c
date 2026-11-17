/* ptr_00883ad8 - 0x00883ad8 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


void ptr_00883ad8(void)

{
  int iVar1;
  undefined **ppuVar2;
  uint uVar3;
  undefined4 *puVar4;
  
  iVar1 = 0x14;
  if (DAT_00982000 == 0) {
    iVar1 = 0x200;
  }
  else if (0x13 < DAT_00982000) goto LAB_00883af7;
  DAT_00982000 = iVar1;
LAB_00883af7:
  DAT_00980fe4 = FUN_0087fc96(DAT_00982000,4);
  if (DAT_00980fe4 == 0) {
    DAT_00982000 = 0x14;
    DAT_00980fe4 = FUN_0087fc96(0x14,4);
    if (DAT_00980fe4 == 0) {
      __amsg_exit(0x1a);
    }
  }
  iVar1 = 0;
  ppuVar2 = &PTR_DAT_00972a60;
  do {
    *(undefined ***)(iVar1 + DAT_00980fe4) = ppuVar2;
    ppuVar2 = ppuVar2 + 8;
    iVar1 = iVar1 + 4;
  } while ((int)ppuVar2 < 0x972ce0);
  uVar3 = 0;
  puVar4 = &DAT_00972a70;
  do {
    iVar1 = *(int *)((&DAT_00980ee0)[(int)uVar3 >> 5] + (uVar3 & 0x1f) * 0x24);
    if ((iVar1 == -1) || (iVar1 == 0)) {
      *puVar4 = 0xffffffff;
    }
    puVar4 = puVar4 + 8;
    uVar3 = uVar3 + 1;
  } while ((int)puVar4 < 0x972ad0);
  return;
}


