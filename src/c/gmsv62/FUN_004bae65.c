/* FUN_004bae65 - 0x004bae65 in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


undefined4 __thiscall FUN_004bae65(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  short sVar3;
  short sVar4;
  
  cVar1 = FUN_0045f03e(param_1 + 0x28,*(undefined4 *)(param_1 + 0x2a));
  cVar2 = FUN_0045f03e(param_2 + 0x28,*(undefined4 *)(param_2 + 0x2a));
  if (cVar1 == cVar2) {
    cVar1 = FUN_0045f03e(param_1 + 0x2e,*(undefined4 *)(param_1 + 0x30));
    cVar2 = FUN_0045f03e(param_2 + 0x2e,*(undefined4 *)(param_2 + 0x30));
    if (cVar1 == cVar2) {
      sVar3 = FUN_0045f084(param_1 + 0x34,*(undefined4 *)(param_1 + 0x38));
      sVar4 = FUN_0045f084(param_2 + 0x34,*(undefined4 *)(param_2 + 0x38));
      if (sVar3 == sVar4) {
        sVar3 = FUN_0045f084(param_1 + 0x3c,*(undefined4 *)(param_1 + 0x40));
        sVar4 = FUN_0045f084(param_2 + 0x3c,*(undefined4 *)(param_2 + 0x40));
        if (sVar3 == sVar4) {
          sVar3 = FUN_0045f084(param_1 + 0x44,*(undefined4 *)(param_1 + 0x48));
          sVar4 = FUN_0045f084(param_2 + 0x44,*(undefined4 *)(param_2 + 0x48));
          if (sVar3 == sVar4) {
            sVar3 = FUN_0045f084(param_1 + 0x4c,*(undefined4 *)(param_1 + 0x50));
            sVar4 = FUN_0045f084(param_2 + 0x4c,*(undefined4 *)(param_2 + 0x50));
            if (sVar3 == sVar4) {
              sVar3 = FUN_0045f084(param_1 + 0x54,*(undefined4 *)(param_1 + 0x58));
              sVar4 = FUN_0045f084(param_2 + 0x54,*(undefined4 *)(param_2 + 0x58));
              if (sVar3 == sVar4) {
                sVar3 = FUN_0045f084(param_1 + 0x5c,*(undefined4 *)(param_1 + 0x60));
                sVar4 = FUN_0045f084(param_2 + 0x5c,*(undefined4 *)(param_2 + 0x60));
                if (sVar3 == sVar4) {
                  sVar3 = FUN_0045f084(param_1 + 100,*(undefined4 *)(param_1 + 0x68));
                  sVar4 = FUN_0045f084(param_2 + 100,*(undefined4 *)(param_2 + 0x68));
                  if (sVar3 == sVar4) {
                    sVar3 = FUN_0045f084(param_1 + 0x6c,*(undefined4 *)(param_1 + 0x70));
                    sVar4 = FUN_0045f084(param_2 + 0x6c,*(undefined4 *)(param_2 + 0x70));
                    if (sVar3 == sVar4) {
                      sVar3 = FUN_0045f084(param_1 + 0x74,*(undefined4 *)(param_1 + 0x78));
                      sVar4 = FUN_0045f084(param_2 + 0x74,*(undefined4 *)(param_2 + 0x78));
                      if (sVar3 == sVar4) {
                        sVar3 = FUN_0045f084(param_1 + 0x7c,*(undefined4 *)(param_1 + 0x80));
                        sVar4 = FUN_0045f084(param_2 + 0x7c,*(undefined4 *)(param_2 + 0x80));
                        if (sVar3 == sVar4) {
                          sVar3 = FUN_0045f084(param_1 + 0x84,*(undefined4 *)(param_1 + 0x88));
                          sVar4 = FUN_0045f084(param_2 + 0x84,*(undefined4 *)(param_2 + 0x88));
                          if (sVar3 == sVar4) {
                            sVar3 = FUN_0045f084(param_1 + 0x8c,*(undefined4 *)(param_1 + 0x90));
                            sVar4 = FUN_0045f084(param_2 + 0x8c,*(undefined4 *)(param_2 + 0x90));
                            if (sVar3 == sVar4) {
                              sVar3 = FUN_0045f084(param_1 + 0x94,*(undefined4 *)(param_1 + 0x98));
                              sVar4 = FUN_0045f084(param_2 + 0x94,*(undefined4 *)(param_2 + 0x98));
                              if (sVar3 == sVar4) {
                                sVar3 = FUN_0045f084(param_1 + 0x9c,*(undefined4 *)(param_1 + 0xa0))
                                ;
                                sVar4 = FUN_0045f084(param_2 + 0x9c,*(undefined4 *)(param_2 + 0xa0))
                                ;
                                if (sVar3 == sVar4) {
                                  sVar3 = FUN_0045f084(param_1 + 0xa4,
                                                       *(undefined4 *)(param_1 + 0xa8));
                                  sVar4 = FUN_0045f084(param_2 + 0xa4,
                                                       *(undefined4 *)(param_2 + 0xa8));
                                  if (sVar3 == sVar4) {
                                    sVar3 = FUN_0045f084(param_1 + 0xac,
                                                         *(undefined4 *)(param_1 + 0xb0));
                                    sVar4 = FUN_0045f084(param_2 + 0xac,
                                                         *(undefined4 *)(param_2 + 0xb0));
                                    if (sVar3 == sVar4) {
                                      return 1;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return 0;
}


