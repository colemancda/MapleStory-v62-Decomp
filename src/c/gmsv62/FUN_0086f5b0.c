/* FUN_0086f5b0 - 0x0086f5b0 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined1 FUN_0086f5b0(undefined4 param_1,uint param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint uVar2;
  LPCSTR lpLibFileName;
  HMODULE hLibModule;
  undefined4 uVar3;
  code *pcVar4;
  code *pcVar5;
  code *pcVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 local_11;
  undefined4 local_c;
  int *piStack_8;
  undefined1 auStack_4 [4];
  
  local_11 = 1;
  lpLibFileName = (LPCSTR)FUN_00875080(&DAT_0096eae0);
  hLibModule = LoadLibraryA(lpLibFileName);
  if (hLibModule != (HMODULE)0x0) {
    uVar3 = FUN_00875080(&DAT_0096eac4);
    pcVar4 = (code *)FUN_0086f770(hLibModule,uVar3);
    uVar3 = FUN_00875080(&DAT_0096eaac);
    pcVar5 = (code *)FUN_0086f770(hLibModule,uVar3);
    uVar3 = FUN_00875080(&DAT_0096ea98);
    pcVar6 = (code *)FUN_0086f770(hLibModule,uVar3);
    if (((pcVar4 != (code *)0x0) && (pcVar5 != (code *)0x0)) && (pcVar6 != (code *)0x0)) {
      iVar7 = (*pcVar4)(param_1,&local_c);
      if (iVar7 != 0) {
        uVar3 = FUN_00402605(iVar7);
        iVar7 = (*pcVar5)(param_1,local_c,iVar7,uVar3);
        if (iVar7 != 0) {
          (*pcVar6)(uVar3,&DAT_009640e8,&piStack_8,auStack_4);
          if (*piStack_8 == -0x110fb43) {
            uVar1 = (uint)*(ushort *)(piStack_8 + 3) +
                    (((uint)piStack_8[3] >> 0x10) +
                    ((uint)*(ushort *)(piStack_8 + 2) + ((uint)piStack_8[2] >> 0x10) * 100) * 100) *
                    100;
            uVar2 = (param_5 & 0xffff) +
                    ((param_4 & 0xffff) + ((param_3 & 0xffff) + (param_2 & 0xffff) * 100) * 100) *
                    100;
            if (DAT_0097fc64 != 0) {
              uVar8 = FUN_00875080(&DAT_0096ea7c,param_1,uVar1,uVar2);
              FUN_0086cff0(DAT_0097fc64 + 0x24,uVar8);
            }
            if (uVar1 < uVar2) {
              local_11 = 0;
            }
          }
        }
        FUN_00402614(uVar3);
      }
    }
    FreeLibrary(hLibModule);
    return local_11;
  }
  return 1;
}


