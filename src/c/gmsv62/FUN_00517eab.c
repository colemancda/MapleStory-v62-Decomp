/* FUN_00517eab - 0x00517eab in GMSv62.exe (image base 0x00400000).
 * Raw Ghidra decompiler output, not yet reviewed. */
#include "ghidra_types.h"
#include "gmsv62_decls.h"


/* WARNING: Removing unreachable block (ram,0x00518597) */
/* WARNING: Removing unreachable block (ram,0x0051852c) */
/* WARNING: Removing unreachable block (ram,0x005184be) */
/* WARNING: Removing unreachable block (ram,0x00518450) */
/* WARNING: Removing unreachable block (ram,0x005183e2) */
/* WARNING: Removing unreachable block (ram,0x00518374) */
/* WARNING: Removing unreachable block (ram,0x00518306) */
/* WARNING: Removing unreachable block (ram,0x00518298) */
/* WARNING: Removing unreachable block (ram,0x0051822a) */
/* WARNING: Removing unreachable block (ram,0x005181bc) */
/* WARNING: Removing unreachable block (ram,0x005181f3) */
/* WARNING: Removing unreachable block (ram,0x00518261) */
/* WARNING: Removing unreachable block (ram,0x005182cf) */
/* WARNING: Removing unreachable block (ram,0x0051833d) */
/* WARNING: Removing unreachable block (ram,0x005183ab) */
/* WARNING: Removing unreachable block (ram,0x00518419) */
/* WARNING: Removing unreachable block (ram,0x00518487) */
/* WARNING: Removing unreachable block (ram,0x005184f5) */
/* WARNING: Removing unreachable block (ram,0x00518563) */
/* WARNING: Removing unreachable block (ram,0x005185cb) */

undefined4 FUN_00517eab(void)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int unaff_EBP;
  
  FUN_00879bb8();
  *(undefined4 *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    FUN_004027eb();
LAB_005186a2:
    uVar2 = 0;
  }
  else {
    *(undefined1 **)(unaff_EBP + -0x14) = &stack0xffffffd0;
    FUN_00448a17(&DAT_009651a8);
    iVar1 = unaff_EBP + -0x30;
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_0040263d(iVar1);
    FUN_004048a4(iVar1);
    *(undefined1 *)(unaff_EBP + -4) = 2;
    FUN_004343c5();
    *(undefined4 *)(unaff_EBP + -0x10) = 0;
    FUN_00454081();
    *(undefined1 *)(unaff_EBP + -4) = 4;
    iVar1 = FUN_00402bc3();
    if (iVar1 < 0) {
      FUN_00878dfb();
    }
    if ((*(char **)(unaff_EBP + -0x10) != (char *)0x0) && (**(char **)(unaff_EBP + -0x10) != '\0'))
    {
      *(undefined4 *)(unaff_EBP + -0x14) = 0;
      FUN_00518a02();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      iVar1 = FUN_004a3109();
      if (iVar1 == 0) {
        *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0;
      }
      else {
        iVar1 = FUN_004a3109();
        if (iVar1 == 0) {
          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 100;
        }
        else {
          iVar1 = FUN_004a3109();
          if (iVar1 == 0) {
            *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x6e;
          }
          else {
            iVar1 = FUN_004a3109();
            if (iVar1 == 0) {
              *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x6f;
            }
            else {
              iVar1 = FUN_004a3109();
              if (iVar1 == 0) {
                *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x70;
              }
              else {
                iVar1 = FUN_004a3109();
                if (iVar1 == 0) {
                  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x78;
                }
                else {
                  iVar1 = FUN_004a3109();
                  if (iVar1 == 0) {
                    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x79;
                  }
                  else {
                    iVar1 = FUN_004a3109();
                    if (iVar1 == 0) {
                      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x7a;
                    }
                    else {
                      iVar1 = FUN_004a3109();
                      if (iVar1 == 0) {
                        *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x82;
                      }
                      else {
                        iVar1 = FUN_004a3109();
                        if (iVar1 == 0) {
                          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x83;
                        }
                        else {
                          iVar1 = FUN_004a3109();
                          if (iVar1 == 0) {
                            *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0x84;
                          }
                          else {
                            iVar1 = FUN_004a3109();
                            if (iVar1 == 0) {
                              *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0xd2;
                            }
                            else {
                              iVar1 = FUN_004a3109();
                              if (iVar1 == 0) {
                                *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0xd3;
                              }
                              else {
                                iVar1 = FUN_004a3109();
                                if (iVar1 == 0) {
                                  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0xd4;
                                }
                                else {
                                  iVar1 = FUN_004a3109();
                                  if (iVar1 == 0) {
                                    *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0xdc;
                                  }
                                  else {
                                    iVar1 = FUN_004a3109();
                                    if (iVar1 == 0) {
                                      *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0xdd;
                                    }
                                    else {
                                      iVar1 = FUN_004a3109();
                                      if (iVar1 == 0) {
                                        *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0xde;
                                      }
                                      else {
                                        iVar1 = FUN_004a3109();
                                        if (iVar1 == 0) {
                                          *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) = 0xe6;
                                        }
                                        else {
                                          iVar1 = FUN_004a3109();
                                          if (iVar1 == 0) {
                                            *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) =
                                                 0xe7;
                                          }
                                          else {
                                            pcVar3 = DAT_00980dfc;
                                            if (*(int *)(unaff_EBP + -0x10) != 0) {
                                              pcVar3 = *(char **)(unaff_EBP + -0x10);
                                            }
                                            iVar1 = _strcmp(pcVar3,s_bishop_009650b0);
                                            if (iVar1 == 0) {
                                              *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) =
                                                   0xe8;
                                            }
                                            else {
                                              pcVar3 = DAT_00980dfc;
                                              if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                pcVar3 = *(char **)(unaff_EBP + -0x10);
                                              }
                                              iVar1 = _strcmp(pcVar3,s_hunter_009650a8);
                                              if (iVar1 == 0) {
                                                *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc) =
                                                     0x136;
                                              }
                                              else {
                                                pcVar3 = DAT_00980dfc;
                                                if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                  pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                }
                                                iVar1 = _strcmp(pcVar3,s_ranger_009650a0);
                                                if (iVar1 == 0) {
                                                  *(undefined4 *)(*(int *)(unaff_EBP + -0x14) + 0xc)
                                                       = 0x137;
                                                }
                                                else {
                                                  pcVar3 = DAT_00980dfc;
                                                  if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                    pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                  }
                                                  iVar1 = _strcmp(pcVar3,s_bowMaster_00965094);
                                                  if (iVar1 == 0) {
                                                    *(undefined4 *)
                                                     (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x138;
                                                  }
                                                  else {
                                                    pcVar3 = DAT_00980dfc;
                                                    if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                      pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                    }
                                                    iVar1 = _strcmp(pcVar3,s_crossbowman_00965088);
                                                    if (iVar1 == 0) {
                                                      *(undefined4 *)
                                                       (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x140;
                                                    }
                                                    else {
                                                      pcVar3 = DAT_00980dfc;
                                                      if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                        pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                      }
                                                      iVar1 = _strcmp(pcVar3,s_sniper_00965080);
                                                      if (iVar1 == 0) {
                                                        *(undefined4 *)
                                                         (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x141
                                                        ;
                                                      }
                                                      else {
                                                        pcVar3 = DAT_00980dfc;
                                                        if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                          pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                        }
                                                        iVar1 = _strcmp(pcVar3,
                                                  s_crossbowMaster_00965070);
                                                  if (iVar1 == 0) {
                                                    *(undefined4 *)
                                                     (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x142;
                                                  }
                                                  else {
                                                    pcVar3 = DAT_00980dfc;
                                                    if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                      pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                    }
                                                    iVar1 = _strcmp(pcVar3,s_rogue_00965068);
                                                    if (iVar1 == 0) {
                                                      *(undefined4 *)
                                                       (*(int *)(unaff_EBP + -0x14) + 0xc) = 400;
                                                    }
                                                    else {
                                                      pcVar3 = DAT_00980dfc;
                                                      if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                        pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                      }
                                                      iVar1 = _strcmp(pcVar3,s_assassin_0096505c);
                                                      if (iVar1 == 0) {
                                                        *(undefined4 *)
                                                         (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x19a
                                                        ;
                                                      }
                                                      else {
                                                        pcVar3 = DAT_00980dfc;
                                                        if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                          pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                        }
                                                        iVar1 = _strcmp(pcVar3,s_hermit_00965054);
                                                        if (iVar1 == 0) {
                                                          *(undefined4 *)
                                                           (*(int *)(unaff_EBP + -0x14) + 0xc) =
                                                               0x19b;
                                                        }
                                                        else {
                                                          pcVar3 = DAT_00980dfc;
                                                          if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                            pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                          }
                                                          iVar1 = _strcmp(pcVar3,
                                                  s_nightlord_00965048);
                                                  if (iVar1 == 0) {
                                                    *(undefined4 *)
                                                     (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x19c;
                                                  }
                                                  else {
                                                    pcVar3 = DAT_00980dfc;
                                                    if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                      pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                    }
                                                    iVar1 = _strcmp(pcVar3,s_thief_00965040);
                                                    if (iVar1 == 0) {
                                                      *(undefined4 *)
                                                       (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x1a4;
                                                    }
                                                    else {
                                                      pcVar3 = DAT_00980dfc;
                                                      if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                        pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                      }
                                                      iVar1 = _strcmp(pcVar3,s_thiefMaster_00965034)
                                                      ;
                                                      if (iVar1 == 0) {
                                                        *(undefined4 *)
                                                         (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x1a5
                                                        ;
                                                      }
                                                      else {
                                                        pcVar3 = DAT_00980dfc;
                                                        if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                          pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                        }
                                                        iVar1 = _strcmp(pcVar3,s_shadower_00965028);
                                                        if (iVar1 == 0) {
                                                          *(undefined4 *)
                                                           (*(int *)(unaff_EBP + -0x14) + 0xc) =
                                                               0x1a6;
                                                        }
                                                        else {
                                                          pcVar3 = DAT_00980dfc;
                                                          if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                            pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                          }
                                                          iVar1 = _strcmp(pcVar3,s_brawler_00965020)
                                                          ;
                                                          if (iVar1 == 0) {
                                                            *(undefined4 *)
                                                             (*(int *)(unaff_EBP + -0x14) + 0xc) =
                                                                 0x1fe;
                                                          }
                                                          else {
                                                            pcVar3 = DAT_00980dfc;
                                                            if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                              pcVar3 = *(char **)(unaff_EBP + -0x10)
                                                              ;
                                                            }
                                                            iVar1 = _strcmp(pcVar3,
                                                  s_marauder_00965014);
                                                  if (iVar1 == 0) {
                                                    *(undefined4 *)
                                                     (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x1ff;
                                                  }
                                                  else {
                                                    pcVar3 = DAT_00980dfc;
                                                    if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                      pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                    }
                                                    iVar1 = _strcmp(pcVar3,s_buccaneer_00965008);
                                                    if (iVar1 == 0) {
                                                      *(undefined4 *)
                                                       (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x200;
                                                    }
                                                    else {
                                                      pcVar3 = DAT_00980dfc;
                                                      if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                        pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                      }
                                                      iVar1 = _strcmp(pcVar3,s_gunslinger_00964ffc);
                                                      if (iVar1 == 0) {
                                                        *(undefined4 *)
                                                         (*(int *)(unaff_EBP + -0x14) + 0xc) = 0x208
                                                        ;
                                                      }
                                                      else {
                                                        pcVar3 = DAT_00980dfc;
                                                        if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                          pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                        }
                                                        iVar1 = _strcmp(pcVar3,s_outlaw_00964ff4);
                                                        if (iVar1 == 0) {
                                                          *(undefined4 *)
                                                           (*(int *)(unaff_EBP + -0x14) + 0xc) =
                                                               0x209;
                                                        }
                                                        else {
                                                          pcVar3 = DAT_00980dfc;
                                                          if (*(int *)(unaff_EBP + -0x10) != 0) {
                                                            pcVar3 = *(char **)(unaff_EBP + -0x10);
                                                          }
                                                          iVar1 = _strcmp(pcVar3,s_corsair_00964fec)
                                                          ;
                                                          if (iVar1 != 0) {
                                                            *(undefined1 *)(unaff_EBP + -4) = 4;
                                                            if (*(int *)(unaff_EBP + -0x14) != 0) {
                                                              FUN_00518ad2();
                                                              *(undefined4 *)(unaff_EBP + -0x14) = 0
                                                              ;
                                                            }
                                                            *(undefined1 *)(unaff_EBP + -4) = 0;
                                                            FUN_00414ebb();
                                                            *(undefined4 *)(unaff_EBP + -4) =
                                                                 0xffffffff;
                                                            if (*(int **)(unaff_EBP + 8) !=
                                                                (int *)0x0) {
                                                              (**(code **)(**(int **)(unaff_EBP + 8)
                                                                          + 8))();
                                                            }
                                                            goto LAB_005186a2;
                                                          }
                                                          *(undefined4 *)
                                                           (*(int *)(unaff_EBP + -0x14) + 0xc) =
                                                               0x20a;
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
        }
      }
      iVar1 = *(int *)(unaff_EBP + -0x14);
      *(int *)(unaff_EBP + -0x1c) = iVar1;
      if (iVar1 != 0) {
        InterlockedIncrement((LONG *)(iVar1 + 4));
      }
      *(undefined1 *)(unaff_EBP + -4) = 6;
      FUN_004f1dc6();
      FUN_004f195a();
      *(undefined1 *)(unaff_EBP + -4) = 5;
      if (*(int *)(unaff_EBP + -0x1c) != 0) {
        FUN_004f192c();
        *(undefined4 *)(unaff_EBP + -0x1c) = 0;
      }
      *(undefined1 *)(unaff_EBP + -4) = 4;
      if (*(int *)(unaff_EBP + -0x14) != 0) {
        FUN_00518ad2();
        *(undefined4 *)(unaff_EBP + -0x14) = 0;
      }
    }
    *(undefined1 *)(unaff_EBP + -4) = 0;
    FUN_00414ebb();
    *(undefined4 *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int **)(unaff_EBP + 8) != (int *)0x0) {
      (**(code **)(**(int **)(unaff_EBP + 8) + 8))();
    }
    uVar2 = 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}


