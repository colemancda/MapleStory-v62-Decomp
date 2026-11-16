/* FUN_51803aa1 - 0x51803aa1 in Sound_DX8.dll (image base 0x51800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "sound_dx8_decls.h"


undefined4 FUN_51803aa1(void)

{
  ushort uVar1;
  ushort *puVar2;
  int iVar3;
  undefined4 uVar4;
  int unaff_EBP;
  
  FUN_5180ea30();
  puVar2 = *(ushort **)(unaff_EBP + 8);
  uVar1 = *puVar2;
  if (uVar1 == 3) {
    uVar4 = *(undefined4 *)(puVar2 + 4);
  }
  else if ((uVar1 == 0) || (uVar1 == 10)) {
    uVar4 = *(undefined4 *)(unaff_EBP + 0xc);
  }
  else {
    Ordinal_8(unaff_EBP + -0x1c);
    *(undefined4 *)(unaff_EBP + -4) = 0;
    FUN_51804844((void *)(unaff_EBP + -0x1c),3,puVar2);
    uVar4 = *(undefined4 *)(unaff_EBP + -0x14);
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    iVar3 = FUN_518047f3((short *)(unaff_EBP + -0x1c));
    if (iVar3 < 0) {
      FUN_5180e990(iVar3);
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar4;
}


