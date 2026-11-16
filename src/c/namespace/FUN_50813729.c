/* FUN_50813729 - 0x50813729 in NameSpace.dll (image base 0x50800000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "namespace_decls.h"


void FUN_50813729(void)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  ushort *puVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int unaff_EBP;
  
  FUN_5080e090();
  *(undefined1 **)(unaff_EBP + -0x10) = &stack0xffffff94;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    FUN_50813945();
    return;
  }
  iVar7 = *(int *)(unaff_EBP + 8);
  iVar5 = *(int *)(iVar7 + 0x14);
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (iVar5 == 0) {
    FUN_50813070();
  }
  puVar4 = *(ushort **)(unaff_EBP + 0xc);
  *(undefined4 *)(unaff_EBP + 8) = 0;
  if (puVar4 != (ushort *)0x0) {
    for (; *puVar4 != 0; puVar4 = puVar4 + 1) {
      *(uint *)(unaff_EBP + 8) = *(int *)(unaff_EBP + 8) * 0x20 + 1 + (uint)*puVar4;
    }
  }
  uVar2 = *(undefined4 *)(iVar7 + 0x14);
  *(undefined4 *)(unaff_EBP + -0x20) = uVar2;
  *(undefined4 *)(unaff_EBP + -0x24) = uVar2;
  FUN_508012a1();
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5080d5b5();
  *(undefined1 *)(unaff_EBP + -4) = 2;
  iVar5 = FUN_5080d6db(unaff_EBP + -0x6c);
  *(int *)(unaff_EBP + 0xc) = iVar5 + 4;
  iVar5 = (**(code **)(*(int *)(unaff_EBP + -0x6c) + 0x18))(&DAT_50818c88,0x3c);
  if (iVar5 != 0x3c) {
    *(undefined4 *)(unaff_EBP + -0x14) = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x14),(ThrowInfo *)&DAT_5081ae30);
  }
  iVar6 = FUN_5080d6db(unaff_EBP + -0x6c);
  bVar8 = (byte)((uint)*(undefined4 *)(unaff_EBP + 8) >> 0x18) ^
          (byte)((uint)*(undefined4 *)(unaff_EBP + 8) >> 0x10) ^
          (byte)((uint)*(undefined4 *)(unaff_EBP + 8) >> 8) ^ *(byte *)(unaff_EBP + 8);
  *(byte *)(unaff_EBP + 0x10) = bVar8;
  FUN_5080dd3e((void *)(unaff_EBP + -0x6c),&DAT_5081ead8);
  FUN_5080df8a(0,*(undefined4 *)(unaff_EBP + -0x50),(byte)*(undefined4 *)(unaff_EBP + 0x10),~bVar8);
  *(undefined4 *)(unaff_EBP + -0x40) = 0;
  *(undefined4 *)(unaff_EBP + -0x3c) = 0;
  *(undefined4 *)(unaff_EBP + -0x38) = 0;
  *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_50818cc4;
  iVar5 = *(int *)(*(int *)(iVar7 + 0x14) + 0x48);
  *(undefined1 *)(unaff_EBP + -4) = 3;
  FUN_508139fc((int *)(unaff_EBP + -0x6c),iVar6,*(int *)(unaff_EBP + 8),(void *)(unaff_EBP + -0x48),
               iVar5);
  FUN_50813b22(*(void **)(iVar7 + 0x14),(int *)(unaff_EBP + -0x6c),iVar6,*(int *)(unaff_EBP + 8),
               unaff_EBP + -0x48);
  iVar7 = FUN_5080d6db(unaff_EBP + -0x6c);
  *(int *)(unaff_EBP + 0x10) = iVar7;
  *(int *)(unaff_EBP + -0x34) = iVar7 - iVar6;
  *(undefined4 *)(unaff_EBP + -0x30) = 0;
  FUN_5080d7cd((void *)(unaff_EBP + -0x6c),*(int *)(unaff_EBP + 0xc),0);
  iVar7 = (**(code **)(*(int *)(unaff_EBP + -0x6c) + 0x18))(unaff_EBP + -0x34,4);
  if (iVar7 != 4) {
    *(undefined4 *)(unaff_EBP + -0x18) = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x18),(ThrowInfo *)&DAT_5081ae30);
  }
  iVar7 = (**(code **)(*(int *)(unaff_EBP + -0x6c) + 0x18))(unaff_EBP + -0x30,4);
  if (iVar7 != 4) {
    *(undefined4 *)(unaff_EBP + -0x1c) = 0x26;
                    /* WARNING: Subroutine does not return */
    _CxxThrowException((void *)(unaff_EBP + -0x1c),(ThrowInfo *)&DAT_5081ae30);
  }
  FUN_5080d7cd((void *)(unaff_EBP + -0x6c),*(int *)(unaff_EBP + 0x10),0);
  *(undefined1 *)(unaff_EBP + -4) = 2;
  *(undefined ***)(unaff_EBP + -0x48) = &PTR_FUN_50818cc4;
  FUN_5081423a(unaff_EBP + -0x48);
  *(undefined1 *)(unaff_EBP + -4) = 1;
  FUN_5080dad0();
  puVar3 = *(undefined4 **)(unaff_EBP + -0x20);
  piVar1 = puVar3 + 1;
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    *puVar3 = 0;
  }
  FUN_50813945();
  return;
}


